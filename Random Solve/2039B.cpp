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
        string s;
        cin >> s;

        vector<string> substrings;

        for(int i=0; i<s.length(); i++){
        	string temp = "";
        	for(int j=i; j<s.length(); j++){
        		temp += s[j];
        		substrings.pb(temp);
        	}
        }

        int count = 0;
        
        for(int k=0; k<substrings.size(); k++){
        	vector<string> newsubs;

        	for(int i=0; i<substrings[k].length(); i++){
        		string temp = "";
	        	for(int j=i; j<substrings[k].length(); j++){
	        		temp += substrings[j];
	        		newsubs.pb(temp);
	        	}
        	}
        	

	        if(newsubs.size()%2 == 0){
	        	cout << substrings[k] << endl;
	        	count++;
	        	break;
	        }
	        else{
	        	continue;
	        }
	    }

	    if(count==0){
	    	cout << "-1" <<endl;
	    }
	    
    }
    return 0;
}
