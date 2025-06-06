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

ull calc(ull a){
	return (a-1)*(a-1);
	
}

void final_y(ull a, ull b, ull last){
	if(a%2 == 0){
		cout << last + a + a - b << endl;
		return;
	}
	else{
		cout << last + b << endl;
		return;
	}
}

void final_x(ull b, ull a, ull last){
	if(b%2 == 0){
		cout << last + a << endl;
	}
	else{
		cout << last + b + b - a << endl;
	}
}

void solve(){
	  ull y, x;
	  cin >> y >> x;

	  if(y>=x){
	  	ull s = calc(y);
	  	final_y(y, x, s);
	  	return;
	  }
	  
	  if(x>=y){
	  	ull s = calc(x);
	  	final_x(x, y, s);
	  	return;
	  }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
