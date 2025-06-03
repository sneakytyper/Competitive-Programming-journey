/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <locale>
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

int fib(int n){
	if(n<=1) return 1;

	return fib(n-1)+fib(n-2);
}


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        int box_dim[m][3];
        for(int i=0; i<m; i++){
        	for(int j=0; j<3; j++){
        		cin >> box_dim[i][j];
        	}
        }
        int s = fib(n);
        int r = fib(n-1);

        int sum=0;
        for(int i=1; i<=n; i++){
        	sum += fib(i)*fib(i)*fib(i);
        }

        char arr[m];
        for(int i=0; i<m; i++){
        	if(box_dim[i][0]*box_dim[i][1]*box_dim[i][2] >= sum){
        		if(s<=box_dim[i][0] && s<= box_dim[i][1] && s+r<=box_dim[i][2]){
        		arr[i] = '1';
        		}
        		else{
	        		if(s<=box_dim[i][1] && s<= box_dim[i][2] && s+r<=box_dim[i][0])
	        		arr[i] = '1';
	        		else{
	        			if(s<=box_dim[i][2] && s<= box_dim[i][0] && s+r<=box_dim[i][1]){
	        				arr[i] = '1';
	        			}
	        			else{
	        				arr[i] = '0';
	        			}
	        		}
        		}
        	}
        	else{
        		arr[i] = '0';
        	}
    	}

        for(int i=0; i<m; i++){
        	cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}
