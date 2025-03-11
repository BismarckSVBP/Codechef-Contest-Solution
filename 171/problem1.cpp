//https://www.codechef.com/START171C/problems/SWISHGAME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--){
        int m;
        int k;
        cin >> m >> k;
        string str;
        cin >> str;
        int count =0;
        for(int i=0;i<m;i++){
            if(str[i]=='S'){
                count++;
            }
        }
        if(count >=k){
            cout << m << endl;
        }
        else{
            int d= m + (k-count);
            d--;
            cout << d <<endl;
        }
    }
}
