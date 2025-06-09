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
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
	int n;
	cin >> n;

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int maxi = INT_MIN;
	for(int i=0; i<n; i++){
		maxi = max(maxi, a[i]);
	}


	int b[maxi + 1];
	for(int i=0; i<maxi +1; i++){
		b[i]=0;
	}

	int i=1;
	while(i<maxi+1){
		for(int j=0; j<n; j++){
			if(i==a[j])
				b[i]++;
		}
		i++;
	}

	// for(auto it: b){
	// 	cout << it << " ";
	// }
	// cout << endl;

	int maxa = INT_MIN;
	for(int i=0; i<maxi + 1; i++){
		maxa = max(maxa, b[i]);
	}


	int p = maxa;
	int cnt = 0;
	int cnt1 = 0;

	while(p>0 && cnt <1 && cnt1<2){
		cnt = 0;
		for(int j=0; j<n; j++){
			if(p==b[j] && p!=maxa){
				cnt++;
			}

			if(p==maxa && p==b[j]){
				cnt1++;
			}
		}
		--p;
	}

	// cout << cnt << cnt1 << endl;

	// cout << p << endl;

	if(p==maxa-1){
		cout << p+1 << endl;
	}
	else{
		cout << p+2 << endl;
	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
