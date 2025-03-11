//https://www.codechef.com/START166C/problems/DPOWER

#include <bits/stdc++.h>
using namespace std;


vector<int> s1(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

vector<int> s2( vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> arr2;
    for (int i = 0; i < n; i++) {
        arr2.push_back({arr[i], i});
    }

    sort(arr2.begin(), arr2.end(), greater<pair<int, int>>());

    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        r[arr2[i].second] = i + 1;
    }
    return r;
}

int solve2(vector<int>& r) {
    int ans = 0;
    int n = r.size();
    for (int i = 0; i < n - 1; i++) {
        if (abs(r[i] - r[i + 1]) == 1) {
            ans++;
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr = s1(n);
    vector<int> r = s2(arr);
    int ans = solve2(r);
    cout << n - ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
