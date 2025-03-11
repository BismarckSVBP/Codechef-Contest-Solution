//https://www.codechef.com/START156C/problems/EVENHATE

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;

        int odd = 0, even = 0;
        int i = 0;
        while (i < n) {
            int no;
            cin >> no;
            if (no % 2 == 1) odd++;
            else even++;
            i++;
        }

        int ans = 0;

        if (odd == 0) {
            cout << 0 << '\n';
            continue;
        }

        if (odd & 1 == 1) {
            ans = ans +(odd / 2 + 1);
            ans = ans + even;
        } else {
            ans = ans + (odd / 2);
            ans = ans + even;
        }

        cout << ans << '\n';
    }
}
