/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
	int n, q;
	cin >> n >> q;

	ll query[q][3];
	for(ll i=0; i<q; i++){
		cin >> query[i][0] >> query[i][1];
		if(query[i][0]!=1){
			query[i][2]=0;
		}
		else{
			cin >> query[i][2];
		}
	}

	vector<ll> a(n);
	for(ll i=0; i<n; i++){
		a[i]=i+1;
	}

	for(ll i=0; i<q; i++){
		
		if(query[i][0]==1){
			ll p = query[i][1];
			ll x = query[i][2];
			a[p-1]= x;
		}

		if(query[i][0]==2){
			ll p = query[i][1];
			cout << a[p-1] << endl;
		}

		if(query[i][0]==3){

			ll k = query[i][1];


			vector<ll> temp(n);
			temp = a;

			int s = k%n;
			cout << s << " ";

			if(s!=0){
				for(int j=0; j<n; j++){
					if((j-s)>=0){
						a[j-s] = temp[j];
					}
					else{
						a[n-(j+s)] = temp[j];
					}
				}
			}
		}
	}
}


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
