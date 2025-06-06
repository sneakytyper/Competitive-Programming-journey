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
	string s;
    cin >> s;

    int cnt = 0;

    int check[s.size()];
    for(int i=0; i<s.size(); i++){
    	check[i] = 0;
    }


    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
        	check[i]++;
        	cnt++;
        }
        else{
        	cnt++;
        	check[i]=cnt;
        	cnt = 0;
       	}	
    }

    int maxi = INT_MIN;
    for(auto it: check){
    	maxi = max(maxi, it);
    }

    cout << maxi << endl;
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
