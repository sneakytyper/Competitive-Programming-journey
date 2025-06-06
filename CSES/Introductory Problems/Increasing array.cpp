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

	if(n==1){
		cout << 0 << endl;
		return;
	}

	ull x[n];
	for(int i=0; i<n; i++){
		cin >> x[i];
	}

	ull sum = 0;
	for(int i=1; i<n; i++){
		if(x[i]<=x[i-1]){
			sum += x[i-1] - x[i];
			x[i] += x[i-1] - x[i];
		}
	}

	cout << sum << endl;
	return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
