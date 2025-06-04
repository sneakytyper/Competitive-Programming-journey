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


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i=0; i<n; i++){
        	cin >> a[i];
        }

        int b[n-1];
        for(int i=0; i<n-1; i++){
        	int flag = 0;

        	for(int j=i+1; j<n; j++){
        		if(a[i]!=a[j]){
        			b[i] = j-i+1;
        			flag = 1;
        			break;
        		}
        	}
        if(flag==0){
        	b[i]=0;
        }
        }

        int least = INT_MAX;
        for(int i=0; i<n-1; i++){
        	if(b[i]!=0)
        	least = min(least, b[i]);
        }

        if(least==INT_MAX){
        	cout << -1 << endl;
        }
        else{
        	cout << least << endl;
        }
    }
    return 0;
}
