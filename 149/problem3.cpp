//https://www.codechef.com/START149D/problems/P1149

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c;
    cin >> a >> b >> c;
    int d = a-b;
    if(d<0){
        d =-d;
    }
    if(d <= c){
        cout << "Yes" << endl;
    }
    else{
          cout << "No" << endl;
    }
}
