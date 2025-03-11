//https://www.codechef.com/START159C/problems/CARDGAME1

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        int x;
        cin >> n >> x;
        int count = 0;
        if (x & 1) {
            for (int i = 1; i <= n; i++) {
                if (i & 1) {
                    count++;
                }
            }
        } else {
            for (int i = 1; i <= n; i++) {
                if (i %2==0) {
                    count++;
                }
            }
        }
        cout << count-1 << endl;

    }
}