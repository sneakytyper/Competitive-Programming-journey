#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;  
    
    int A[N], F[10000001] = {0};  

    for (int i = 0; i < N; i++) {
        cin >> A[i];  
        F[A[i]]++; 
    }

    for (int i = 0; i < N; i++) {
        if (F[A[i]] > 1) {  
            cout << "1\n" << A[i] << "\n";  
            return;
        }
    }

    cout << "-1\n";  

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;  
    while (T--) {
        solve(); 
    }
    
    return 0;
}