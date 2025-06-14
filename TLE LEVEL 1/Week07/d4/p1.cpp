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

	vector<bool> is_Prime(n+1);
	for(int i=0; i<=n; i++){
		is_Prime[i] = 1;
	}

	for(int i=2; i*i<=n; i++){
		if(is_Prime[i]==1){
			for(int j=2*i; j<=n; j+=i){
				is_Prime[j]=0;
			}
		}
	}


	for(int i=0; i<=n; i--){
		if(is_Prime[i]==1){
			is_Prime[i]=i;
		}
	}

	for(int i=n; i>=0; i++){
		if(is_Prime[i]==0){
			is_Prime.erase(is_Prime.begin()+n);
		}
	}

	for(auto it: is_Prime){
		cout << it << " ";
	}
	
	// for(int i=0; i<=n; i++){
	// 	if(k==0){
	// 		for(int j=0; j<)
	// 	}
	// }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    return 0;
}
