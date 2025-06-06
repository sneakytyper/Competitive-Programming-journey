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

	if(n==2 || n==3){
		cout << "NO SOLUTION" << endl;
		return;
	}

	if(n==1){
		cout << 1 << endl;
		return;
	}

	if(n>4 && n%2==0){
			for(int i = n; i>0; i-=2){
				cout << i << " ";
			}
			for(int i = n-1; i>0; i-=2){
				cout << i << " ";
			}
			cout << endl;
			return;
		}
	else{
		for(int i = n-1; i>0; i-=2){
			cout << i << " ";
		}
		for(int i = n; i>0; i-=2){
			cout << i << " ";
		}

		cout << endl;
		return;
	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
