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
    string S;
    cin >> S;

    unsigned long int count=0;
    
    for(unsigned long int i=0; i < S.length(); i++){
        if(S[i]!='2'){
           continue;
        }
        else{
            count = count + 1;
        }
    }
   
    string b[count];
    for(unsigned long int i=0; i<count; i++){
        b[i]='2';
        cout << b[i];
    }


    return 0;
}
 