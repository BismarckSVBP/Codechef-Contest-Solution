//https://www.codechef.com/START165C/problems/POSTPERI

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n>>m>>k;
       int r = 2*n*m;
       int d = 556565656;
        for(int i = 1;i<=n;i++){
            for(int j =1;j<=m;j++){
                int x = 2*(i+j);
                int f = abs(x-k);
                if(f<d){
                    d = f;
                    
                }
            }
        }
        cout << d << endl;
       
    }
}
