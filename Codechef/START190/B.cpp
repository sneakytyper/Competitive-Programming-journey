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
	int x;
	cin >> x;

	if(x==1 || x==2){
		cout << 1 << endl;
		return;
	}

	if(x==3){
		cout << 3 << endl;
		return;
	}

	while(x>3){
		x-=3;
	}

	if(x==1 || x==2){
		cout << 1 << endl;
		return;
	}
	else{
		cout << x << endl;
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
