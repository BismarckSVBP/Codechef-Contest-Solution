//https://www.codechef.com/START168C/problems/BINREM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;
        string str;
        cin >> str;
        
        long long onecount = 0, zerocount = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                onecount++;
            } else {
                 zerocount = zerocount + onecount;
            }
        }
        
        
        cout << ((zerocount % k == 0 && zerocount <= x) ? 1 : 2) << endl;
    }
   
}
