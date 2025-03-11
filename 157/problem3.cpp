//https://www.codechef.com/START157C/problems/TWOCLOSE

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n + 1);

        for (int i = 0; i <= n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end() - 1);

        int a = arr[n];
        bool flag2;

        do {
            flag2 = false;

            for (int i = 0; i < n; i++) {
                if (arr[i] <= 2 * a) {
                    if (arr[i] > a) {
                        a = arr[i];
                        swap(arr[i], arr[n]);
                        flag2 = true;
                    }
                }
            }
        } while (flag2);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        cout << sum << endl;
    }


}