/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <cmath>
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

int count_digits(int x){
	int cnt = 0;
	
	while(x!=0){
		cnt++;
		x /= 10;
		
	}
	return cnt;
}

void solve(){
	int x, k;
	cin >> x >> k;

	if(x==1 && k==1){
		cout << "NO" << endl;
		return;
	}
	
	int d = count_digits(x);


	int num = 0;
	int i=0;
	while(i!=k){
		num += pow(10, i*d) * x;
		i++;
	}



	for(int i=2; i<sqrt(num); i++){
		if(num%i==0){
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
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
