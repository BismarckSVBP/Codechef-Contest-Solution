//https://www.codechef.com/START158C/problems/XORSMALL


#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> z(n);
        int idx = 0;
        while (idx < n) {
            cin >> z[idx++];
        }
        
        int c = z[0];
        
        idx = 0; 
        while (idx < n) {
            c = c & z[idx++];
        }
        
        long long ans = 0;
        long long i = 1;
        
        while (i <= (1ll << 30)) {
            ans += (c & i) ? i : 0; 
            i *= 2; 
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
