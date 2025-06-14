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

bool check(int num){
    int n =1e5;
    vector<int> is_Prime(n);
    for(int i=0; i<n; i++){
        is_Prime[i]=1;
    }

    is_Prime[0] = 0;
    is_Prime[1] = 0;

    for(int i=2; i*i<=n; i++){
        if(is_Prime[i]==true){
            for(int j=2*i; j<=n; j+=i){
                is_Prime[j]=false;
            }
        }
    }

    return (is_Prime[num]==true)? 1 : 0;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    ll n;
    cin >> n;
    cout << check(n) << endl;

    return 0;
}
