//https://www.codechef.com/START158C/problems/LARGESUB

#include <bits/stdc++.h>

using namespace std;
void solve(string str, int n) {
    int ans = 0;
    int idx = 0;

    while (idx < n) {
        ans = (str[idx] == str[0]) ? max(ans, idx + 1) : ans;
        ans = (str[idx] == str[n - 1]) ? max(ans, n - idx) : ans;
        idx++;
    }

    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        solve(str, n);
    }

    return 0;
}