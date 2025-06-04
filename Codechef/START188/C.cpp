#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]%3==0){
        cout << "YES" << endl;
        return;
        }
    }
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum%3==0){
            cout << "YES" << endl;
            return;
        }
    }
    
    sum =0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            sum += arr[i];
            if(sum%3==0){
                cout << "YES" << endl;
                return;
            }
        }
    }
    
    
    cout << "NO" << endl;
    return;
}

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--){
        solve();
    }
}
