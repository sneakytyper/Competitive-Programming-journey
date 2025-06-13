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
	int n, k;
	cin >> n >> k;

	if(n==k){
		for(int i=0; i<n; i++){
			cout << 1;
		}
		cout << endl;
		return;
	}

	if(k==0){
		for(int i=0; i<n; i++){
			cout << 0;
		}
		cout << endl;
		return;
	}

	if(k==1){
		cout << 1;
		for(int i=0; i<n-1; i++){
			cout << 0;
		}
		cout << endl;
		return;
	}

	if(n-k==1){
		for(int i=0; i<n-1; i++){
			cout << 1;
		}
		cout << 0 << endl;
		return;
	}

	if(n-k>1){
		cout << 1;
		for(int i=0; i<n-k-1; i++){
			cout << 0;
		}
		for(int i=0; i<k-1; i++){
			cout << 1;
		}
		cout << 0 << endl;
		return;
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
