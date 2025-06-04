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
	int n,k,w;
	cin >> k >> n >> w;

	int total_cost = k*((w*(w+1))/2);
	int borrow_money = total_cost - n;

	(borrow_money>0)? cout << borrow_money : cout << 0;
	cout << endl;
	
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
