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

void solve(){
	int n;
	cin >> n;

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

    int b[n];
    for(int i=0; i<n; i++){
        b[i]=a[i];
    }

    int cnt = 0;
    int flag = 0;
    while(flag==0 && cnt<n){
        cnt = 0;
        for(int i=0; i<n; i++){
            if(b[i]>=0){
            a[i] -= i+1;
            }
            else{
                flag = 1;
                break;
            }

            if(a[i]==0){
                cnt++;
            }
        }
    }

    if(cnt == n){
        cout << "YES" << endl;
        return;
    }

    // int count = 0;
    // int mark = 0;
    // while(mark==0){
    //     mark=0;
    //     for(int i=0; i<n; i++){
    //         if(a[i]>=0){
    //         a[i] -= n-i;
    //         }
    //         else{
    //             mark = 1;
    //             break;
    //         }

    //         if(a[i] - (n-i)==0){
    //             count++;
    //         }
    //     }
    // }

    // if(count==n){
    //     cout << "YES" << endl;
    //     return;
    // }

    // cout << "NO" << endl;
    // return;
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
