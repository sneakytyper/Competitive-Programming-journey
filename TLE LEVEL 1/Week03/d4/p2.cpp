/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <cctype>
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
 
int main(){
    init_code();
 
    //for more efficieny while taking cin and cout
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);
 
    //my code starts here.
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
            if(i!=n){
                for(int k=1; k<=n-i; k++){
                    cout << " ";
                }
                for(int l=1; l<=i; l++){
                    cout << "* ";
                }
                cout << "\n";
            }
            else{
                for(int j=1; j<=n; j++){
                    cout << "* " ;
                }
                cout << "\n";
            }
        }
    for(int i=n; i>0; i--){
          if(i!=n){
                for(int k=1; k<=n-i; k++){
                    cout << " ";
                }
                for(int l=1; l<=i; l++){
                    cout << "* ";
                }
                cout << "\n";
            }
            else{
                for(int j=1; j<=n; j++){
                    cout << "* " ;
                }
                cout << "\n";
            }
    }
  
    return 0;
}
 