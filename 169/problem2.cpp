//https://www.codechef.com/START169C/problems/P3169


#include <bits/stdc++.h>
using namespace std;

int fun3(map<int, int>& m) {
    int maxi = 0;
    for (auto& p : m) {
        maxi = max(maxi, p.second);
    }
    return maxi;
}

bool fun(int n, int k, vector<int>& arr) {
    map<int, int> m2;
    int temp = 0, i = 0;
    while (i < n) {
        m2[arr[i]]++;
        temp = max(temp, m2[arr[i]]);
        if (temp == m2[k]) {
            return true;
        }
        i++;
    }
    return false;
}

bool fun2(int n, int k, vector<int>& arr) {
    map<int, int> m3;
    int temp = 0, i = n - 1;
    while (i >= 0) {
        m3[arr[i]]++;
        temp = max(temp, m3[arr[i]]);
        if (temp == m3[k]) {
            return true;
        }
        i--;
    }
    return false;
}

void solve(int n, int k, vector<int>& arr) {
    map<int, int> m;
    int i = 0;
    while (i < n) {
        m[arr[i]]++;
        i++;
    }
    int ans = fun3(m);

    if (ans == m[k]) {
        cout << 0 << endl;
    } else {
        bool flag = fun(n, k, arr) || fun2(n, k, arr);
        cout << (flag ? 1 : 2) << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        solve(n, k, arr);
    }
    return 0;
}
