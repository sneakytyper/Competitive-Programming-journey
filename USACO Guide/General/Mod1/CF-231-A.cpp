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

    int n;
    cin >> n;

    int a[n][3];
    
    int total_prob = 0;

    for(int i=0; i<n; i++){
    	cin >> a[i][0] >> a[i][1] >> a[i][2];
    	int cnt=0;
    	if(a[i][0]==1) cnt++;
    	if(a[i][1]==1) cnt++;
    	if(a[i][2]==1) cnt++;

    	if(cnt>=2){
    		total_prob++;
    	}
    }

    cout << total_prob << endl;
    return 0;
}
