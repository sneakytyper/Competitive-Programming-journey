/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <vector>
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

int n = 3;
int k = 1;
vector<int> subset;

void search(int k){
    if(k == n+1){

    }
    else{
        subset.pb(k);
        search(k+1);
        subset.pop_back();
        search(k+1);
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    search(k);

    for(auto it :subset){
        cout << it << endl;
    }

    return 0;
}
