//https://www.codechef.com/START162C/problems/ASSIGNSCORE

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int m = 100*(n+1);
        m = m/2;
        int sum = 0;
         for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        int k = m - sum;
        
        if(k<=100 && k>0){
            cout << k << endl;
        }else if(k<0){
            cout << 0 << endl;
        }
        else{
            cout << -1<< endl;
        }
    }
}