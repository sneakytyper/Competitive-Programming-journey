/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

int checker(ll arr[], int n, ll i){
	ll cnt = 0;
	for(int j=0; j<n; j++){
		if(arr[j]>=i){
			cnt++;
		}
	}

	return cnt;
}

void solve(){
	int n;
	cin >> n;

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	sort(a, a+n);
	vector<pair<int,int>> v;

	for(int i=0; i<=a[n-1]; i++){
		int cnt = 0;
		
		for(int j=0; j<n; j++){
			
			if(a[j]>=i){
				cnt++;
			}
		}
		// cout << i << " ";
		// cout << cnt << endl;
		v.pb({cnt,i});
	}

	sort(v.begin(), v.end());



	for(int i=0; i<v.size(); i++){
		if(v[i].first >= v[i].second){
			cout << v[i].first << endl;
			return;
		}

		
	}


}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    return 0;
}
