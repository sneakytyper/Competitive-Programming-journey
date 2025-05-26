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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int arr[n];

        
        if(n%2 == 0){
			for(int i=0; i<n/2; i++){
				if(s[i] == s[n-i-1]){
					arr[i] = arr[n-i-1] = 1;
					cout << arr[i] << " ";
				}
				else{
					arr[i] = arr[n-i-1] = 0;
					cout << arr[i] << " ";
				}
			}
		}
		else{
			for(int i=0; i<n/2 + 1; i++){
				if(s[i] == s[n-i-1]){
					arr[i] = arr[n-i-1] = 1;
					cout << arr[i] << " ";
				}
				else{
					arr[i] = arr[n-i-1] = 0;
					cout << arr[i] << " ";
				}
			}
		}

		int sum = 0;
		for(int i=0; i<n; i++){
			sum = sum + arr[i];
		}

		if(sum == k){
			cout << "YES" << endl;
		}
		else{
			int re = sum - k;
			if(re>0){
				if(re%)
			}
		}

    }
    return 0;
}
