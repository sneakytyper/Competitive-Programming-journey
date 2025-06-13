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
	int l, r, k;
	cin >> l >> r >> k;

	if(r-l==0){
		if(r==1){
			cout << "NO" << endl;
			return;
		}
		else{
			cout << "YES" << endl;
			return;
		}
		
	}

	int n = r-l+1;
	vector<int> v;
	for(int i=0; i<n; i++){
		v.pb(l+i);
	}


	do{
		int gcd_v = __gcd(v[0],v[1]);

		for(int i=2; i<n; i++){
			gcd_v = __gcd(gcd_v, v[i]);
		}
		cout << gcd_v << endl;
		if(gcd_v>1){
			cout << "YES" << endl;
			return;
		}
		
		int x = v[0]*v[1];
		if(v[0]==1){
			v.erase(v.begin());
		}
		else{
			if(v[1]==1){
				v.erase(v.begin());
			}
		}


		v.erase(v.begin());
		v.pb(x);
		k--;
	}while(k>0);

	cout << "NO" << endl;
	return;

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
