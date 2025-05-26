/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
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


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    	string s;
    	cin >> s;


    	int arr[4];

    	for(int i=0; i<4; i++){
    		arr[i]=  s[i]-48;
    	}

    	int y;
    	y = arr[0]*1000+ arr[1]*100 + arr[2]*10 + arr[3];

    	int x = sqrt(y);

    	if(x*x ==y){
    		if(x%2 == 0){
    			cout << x/2 << " " << x/2 << endl;
    		}
    		else{
    			cout << x/2 << " " << x/2 + 1 << endl;
    		}
    	}
    	else{
    		cout << -1 << endl;
    	}
        
    }
    return 0;
}
