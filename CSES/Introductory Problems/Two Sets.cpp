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

    ll sum = (1LL*n*(n+1))/2;
    if(sum%2!=0){
    	cout << "NO" << endl;
    	return;
    }
    
    cout << "YES" << endl;
    sum /= 2;


    vector<int> v1, v2;

    for(int i=n; i>0; i--){
    	if(i<=sum){
    		v1.pb(i);
    		sum -= i;
    	}
    	else{
    		v2.pb(i);
    	}
    }


	cout << v1.size() << endl;
	for(auto it: v1){
		cout << it << " ";
	}
	cout << endl;

	cout << v2.size() << endl;
	for(auto it: v2){
		cout << it << " ";
	}
	cout << endl;
	return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
 
    solve();
    return 0;
}

