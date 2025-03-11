//https://www.codechef.com/START158C/problems/EVENODDDIV

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int f = 0;
        int g = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if ((i & 1) == 1) { 
                    g++;
                } else { 
                    f++;
                }
            }
        }
        if (g == f) {
            cout << 0 << endl;
        }
        else if (g > f) {
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
    }
}
