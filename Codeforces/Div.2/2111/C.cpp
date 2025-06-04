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

bool check(int a[], int least, int n){
	for(int i=0; i<n; i++){
		if(a[i]!=least){
			return 0;
		}
	}

	return 1;
}

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

        int cnt = 0;
        for(int i=0; i<n-1; i++){
        	if(a[i]==a[i+1]){
        		cnt++;
        	}
        }
        if(cnt==n-1){
        	cout << 0 << endl;
        	break;
        }

        int least = INT_MAX;
        for(int i=0; i<n; i++){
        	least = min(a[i], least);
        }

        int cost;
        int anew[4][n];
        for(int i=0; i<n; i++){
        	if(a[i]==least){
        		anew[1][i] = 1;
        	}
        	else{
        		anew[1][i] = 0;
    		}
        }

        for(int i=0; i<n; i++){
        	for(int j=i+1; j<n; i++){
        		if(anew[1][j]==1 && anew[1][j-1]==1 && anew[1][j+1]!=1)
        			anew[1][j] = 2;
        	}

        	for(int j=n-1; j>i; j--){
        		if(anew[1][j]==1 && anew[1][j+1]!=1 && anew[1][j+1]==1)
        			anew[1][j] = 2;
        	}
        }

        for(int i=0; i<n; i++){
        	if(anew[1][i]==2){
        		anew[]
        	}
        }
        if(a[i]==least && a[i+1]==least){
        		cost=(i-1)*least + (n-i-1)*least;
        	}
        	else{
        		cost=(i-1)*least + (n-i)*least;
        	}


    }
    return 0;
}
