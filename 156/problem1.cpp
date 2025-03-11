//https://www.codechef.com/START156C/problems/LONGQUEUE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }
        int s = arr[n-1];
        int p = n;
        for(int i =n-2;i>=0;i--){
            if(s >=2*arr[i]){
                p--;
            }
            else{
                break;
            }
        }
        cout << p << endl;
    }
}
