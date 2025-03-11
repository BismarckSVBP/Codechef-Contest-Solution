//https://www.codechef.com/START150D/problems/ARRAYSTATE
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        int k;
        cin >> n >> k;
        vector < int > arr(n);
        for (int i =0;i<n;i++) {
            cin >> arr[i];
        }
        while (k != 0) {
            int b = arr[0] + arr[n - 1];
            arr.erase(arr.begin());
            arr.pop_back();
            arr.push_back(b);
            k--;
            n--;
        }
       for (int i =0;i<n;i++) {
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
}