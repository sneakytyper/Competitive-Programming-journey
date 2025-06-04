#include <bits/stdc++.h>
using namespace std;

//for input and output.
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 
}

int main(){
	init_code();

	//for more efficieny while taking cin and cout
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	//my code starts here
	int Y;
	1583 <= Y && Y <= 2023;
	cin >> Y;

	int a, b, c;
	a = Y%4;
	b = Y%100;
	c = Y%400;


	if (a!=0){
		cout << 365 << "\n";
	}
	else if(b!=0){
		cout << 366 << "\n";
		}
		else if(c!=0){
			cout << 365 << "\n";
			}	
			else{
				cout << 366 << "\n";
			}	

	return 0;
}