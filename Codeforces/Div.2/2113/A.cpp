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

int cnt(ll &t, ll count1, ll x, ll a){
	while(t>=a){
			count1++;
			t-=x;
		}

	return count1;
}

void solve(){
	ll k, a, b, x, y;
	cin >> k >> a >> b >> x >> y;

	if(k<a && k<b){
		cout << 0 << endl;
		return;
	}

	ll count1 = 0;
	ll count2 = 0;
	ll t = k;
	ll a1 = 0;
	ll a2 = 0;

	if(x<y){
		a1 = cnt(t, count1, x, a );
		a2 = cnt(t, count2, y, b);
	}

	if(x>y){
		a2 = cnt(t, count2, y, b);
		a1 = cnt(t, count1, x, a );
	}

	if(x==y){
		if(a>=b){
			a1 = cnt(t, count1, x, a );
			a2 = cnt(t, count2, y, b);
		}
		else{
			a2 = cnt(t, count2, y, b);
			a1 = cnt(t, count1, x, a );
		}
	}

	cout << a1 + a2 << endl;
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
