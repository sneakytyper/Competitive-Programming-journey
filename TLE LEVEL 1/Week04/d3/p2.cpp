/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

// for input and output.
void init_code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

// declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define endl "\n"


int main() {
    init_code();

    // for more efficiency while taking cin and cout
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    // my code starts here.
    int h, w;
    cin >> h >> w;

    char a[h][w];
    char b[h][w];
    
    string s;
    for(int i=0; i<h; i++){
        cin >> s;
        for(int j=0; j<w; j++){
            a[i][j]=s[j];
        }
    }

    string t;
    for(int i=0; i<h; i++){
        cin >> t;
        for(int j=0; j<w; j++){
            b[i][j]=t[j];
        }
    }
    
    int ah[h];
    int av[w];

    int sumah = 0;
    for(int i=0; i<h; i++){
        ah[i] = 0;
        for(int j=0; j<w; j++){
            ah[i] =  ah[i] + a[i][j];
        }
        sumah = sumah + ah[i];
    }

    int sumav = 0;
    for(int i=0; i<w; i++){
        av[i] = 0;
        for(int j=0; j<h; j++){
            av[i] =  av[i] + a[i][j];
        }
        sumav = sumav + av[i];
    }

    int bh[h];
    int bv[w];

    int sumbh = 0;
    for(int i=0; i<h; i++){
        bh[i] = 0;
        for(int j=0; j<w; j++){
            bh[i] =  bh[i] + b[i][j];
        }
        sumbh = sumbh + bh[i];
    }

    int sumbv = 0;
    for(int i=0; i<w; i++){
        bv[i] = 0;
        for(int j=0; j<h; j++){
            bv[i] =  bv[i] + b[i][j];
        }
        sumbv = sumbv + bv[i];
    }

    if(sumah == sumbh && sumav == sumbv){
        cout << "YES" << endl;
    }
    else{ 
        cout << "NO" << endl;
    }

    cout << sumah << " " << sumbh << " " << sumav << " " << sumbv << endl;
    return 0;
}
