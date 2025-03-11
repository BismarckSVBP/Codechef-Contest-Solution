//https://www.codechef.com/START166C/problems/BORROWBOOK
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int total = 0;
        unordered_map<int,int>m;
        for (int i = 0; i < n; i++) {
          m[arr[i]]=i+1; 
        }
          for (auto& pair :m) {
        total = total + pair.second ;
    }
        cout << total << endl;
    }
    return 0;
}
