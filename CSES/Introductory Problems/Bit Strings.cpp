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

ull power(ull n){
    ull m = 1e9 + 7;
    if(n==0)
        return 1;

    return  (2 * (power(n-1) % m))%m;

}


void solve(){
	ull n;
	cin >> n;

    ull result = power(n);


    cout << result  << endl;
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
	