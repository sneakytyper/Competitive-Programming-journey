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
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int updates[q][2];
    for(int i=0; i<q; i++){
        cin >> updates[i][0];
        cin >> updates[i][1];
    }

    for(int i=0; i<q; i++){
        int index = updates[i][0]-1;
        int value = updates[i][1];
        a[index] = value;

        int sum = 0;
        vector<int> b = a;

        while(b.size() > 1){
            vector<pair<int, pair<int,int>>> check;
            for(int i=0; i<b.size()-1; i++){
                int sum_c = min(b[i], b[i+1]);
                if(b[i] <= b[i+1]){
                    check.pb(mp(sum_c, mp(i, i+1)));
                }
                else{
                    check.pb(mp(sum_c, mp(i+1, i)));
                }
            }

            sort(check.begin(), check.end());
            auto last = check.back();
            
            sum += last.first;
            
            int x = (b[last.second.first] >= b[last.second.second]) ? last.second.first : last.second.second;
            b.erase(b.begin() + x);
        }

        cout << sum << endl;
    }
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