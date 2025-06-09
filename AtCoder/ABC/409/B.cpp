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

	ll a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	ll maxi = INT_MIN;
	for(int i=0; i<n; i++){
		maxi = max(maxi, a[i]);
	}

	ll i=maxi;
	while(i>=0){
		ll cnt = checker(a,n,i);

		if(cnt>=i){
			cout << i << endl;
			return;
		}
	i--;
	}

	cout << 0 << endl;
	return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    __int128_t x;

    solve();
    return 0;
}
