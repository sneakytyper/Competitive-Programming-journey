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
        int n, c;
        cin >> n >> c;

        int a[n];
        for(int i=0; i<n; i++){
        	cin >> a[i];
        }

        int b[n];
        for(int i=0; i<n; i++){
        	cin >> b[i];
        }

        for(int i=0; i<n-1; i++){
        	if(a[i]!=0){
	        	for(int j=i+1; j<n; j++){
	        		if(a[j]!=0){
		        		if(a[i]==a[j]){
		        			if(b[i]<=b[j]){
		        				a[j]=0;
		        			}
		        			else{
		        				a[i]=0;
		        			}
		        		}
	        		}
	        	}
        	}
        }


        // for(int i=0; i<n; i++){
        // 	cout << a[i] << " ";
        // }
        // cout << endl;
        // for(int i=0; i<n; i++){
        // 	cout << b[i] << " ";
        // }
        // cout << endl;

        int value[n];
        for(int i=0; i<n; i++){
        	
        	int x=0;
        	int y=0;

        	if(a[i]!=0){
        		x = 1;
        		y += b[i];
	        	for(int j=i+1; j<n; j++){
	        		if(a[j]!=0){
	        			x++;
	        			y+= b[j];
			        }
			    }
			value[i] = c*x -y;
			}
			else{
				value[i]=0;
			}
		}

		// for(int i=0; i<n; i++){
		// 	cout << value[i] << " ";
		// }
		// cout << endl;

		int large = INT_MIN;
		for(int i=0; i<n; i++){
				large = max(value[i], large);
			}
		
		(large>0)? cout << large : cout << 0;
		cout << endl;

    }
    return 0;
}
