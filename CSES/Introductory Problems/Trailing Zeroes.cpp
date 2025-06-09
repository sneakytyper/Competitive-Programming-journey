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

int fact(int n){

	int m = 1e9 + 7;
	if(n==0 || n==1)
		return 1;

	return ((n%m)*fact(n-1))%m;
}

void solve(){
	int n;
	cin >> n;

	int num = fact(n);

	int cnt = 0;
	bool flag = 0;

	cout << num << endl;

	while(flag == 0){
		if(num%10 == 0){
			cnt++;
		}
		else{
			flag = 1;
		}

		num /= 10;
	}

	cout << cnt << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    return 0;
}
