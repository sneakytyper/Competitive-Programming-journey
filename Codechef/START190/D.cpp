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

	string s;
	cin >> s;

	if(s[0]=='0' && s[1]=='0'){
		cout << "NO" << endl;
		return;
	}

	if(s[n-2]=='0' && s[n-1]=='0'){
		cout << "NO" << endl;
		return;
	}

	for(int i=0; i<n; i++){
		if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0'){
			cout << "NO" << endl;
			return;
		}

		if(s[i]=='0' && s[i+1]=='1'){
			if(s[i+2]=='1'){

			}
			else{
				if(s[i+3]=='1'){

				}
				else{
					cout << "NO" << endl;
					return;
				}
			}
		}
	}

	for(int i=1; i<n; i++){
		if(s[i]=='0' && s[i+1]=='0'){
			if(s[i-1]=='1' && s[i+2]=='1'){


			}
			else{
				cout << "NO" << endl;
				return;
			}
		}

		cout << "YES" << endl;
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
