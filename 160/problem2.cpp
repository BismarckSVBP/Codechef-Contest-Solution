//https://www.codechef.com/START160C/problems/BUYORDEREZ

#include <bits/stdc++.h>

using namespace std;

int count(bool arr[], int n, bool value, int s) {
    int cnt = 0;
    int i = s;
    while (i < n) {
        if (arr[i] == value) {
            cnt++;
        }
        i++;
    }
    return cnt;
}

void pro(bool arr[], int n) { 
    int c1 = count(arr, n - 1, 1, 0);
    int c2 = count(arr, n, 0, 1);

    int result = (c1 + c2 < n - 1) ? (c1 + c2 + n) : (n - 1 + n);
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool arr[n];
        int i = 0;
        while (i < n) {
            cin >> arr[i];
            i++;
        }
        pro(arr, n);
    }
    return 0;
}
