#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int r, b, p, q;
    cin >> r >> b >> p >> q;
    
    (r*p>b*q)?cout << r*p: cout << b*q;
    cout << endl;
}
