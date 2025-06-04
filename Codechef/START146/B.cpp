/*
Author: Sourav Sharma (@Sneaky_Typer)
Go for Gold.
*/

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
	int T;
	cin >> T;
    for(int i=0; i<T; i++){
        int A,B,C,M;
        cin >> A >> B >> C >> M;
        int x,y,z,p,q,r;
        x = A-B;
        y = A-C;
        z = B-C;
        p = B-A;
        q = C-A;
        r = C-B;
        
        if( x>=0 && y>=0 && z>=0 && p>=0 && q>=0 && r>=0)
        	{
            if(x==0 || y==0 || z==0 || p==0 || q==0 || r==0){
                cout << "YES" << endl;
            }
            else{
            	for(i=1; i<=M; i++){
            		A = A+i;
            		if(A==B || A==C){
            			cout << "Yes" << endl;
            		break;
            		}
            	}
            	for(i=1; i<=M; i++){
            		B = B+i;
            		if(B==A || B==C){
            			cout << "Yes" << endl;
            		break;
            		}
            	}
            	for(i=1; i<=M; i++){
            		C = C+i;
            		if(C==B || C==A){
            			cout << "Yes" << endl;
            		break;
            		}
            	}
            }
        }
     }

	return 0;
}	