#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    
	    int esum = 0;
	    for(int i=1; i<n; i+=2){
	        esum += arr[i];
	    }
	    
	    int osum = 0;
	    for(int i=0; i<n; i+=2){
	        osum += arr[i];
	    }
	    
	    esum > osum? cout << esum :  cout << osum;
	    cout << endl;
	}
    return 0;
}
