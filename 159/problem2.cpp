//https://www.codechef.com/START159C/problems/USELEC


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
        int arr[n];
        int brr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        vector < int > crr;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int l = brr[i] - arr[i];
            if (l >= 0) {
                crr.push_back(l + 1);
            }
            else {
                count++;
            }
        }
        int w = n / 2 + 1;
        bool flag = 0;
        sort(crr.begin(), crr.end());
        if (count >= w) {
            cout << "YES" << endl;
        }

        else {
            for (int i = 0; i < crr.size(); i++) {
                if (crr[i] <= x) {
                    x = x - crr[i];
                    count++;
                    if (count >= w) {
                        cout << "YES" << endl;
                        flag = 1;
                        break;
                    }
                }
            }

            if (flag == 0)
                cout << "NO" << endl;
        }
    }
}