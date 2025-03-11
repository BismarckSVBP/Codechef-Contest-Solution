//https://www.codechef.com/START169C/problems/P4169

#include <bits/stdc++.h>

using namespace std;
int popCount(int number) {
    int count = 0;
    while (number) {
        count += number & 1; 
        number >>= 1;
    }
    return count;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin >> n;
        int arr[n];
        int brr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        unordered_map < int, int > m;
        for (int i = 0; i < n; i++) {
            m[arr[i]] = popCount(arr[i]);
        }
        sort(brr,brr+n);
        bool flag= true;
        for(int i =0;i<n;i++){
            if(m[brr[i]]!=m[arr[i]]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}