//https://www.codechef.com/START149D/problems/P3149
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

        }
        int i = 0;
        while (arr[i] <= 0) {
            i++;
        }
        int j = n - 1;
        while (arr[j] <= 0) {
            j--;

        }
        if (j <= i) {
            cout << "0" << endl;
        }
        else {
            int ans = 0;
            for (int m = i; m <= j; m++) {
                if (arr[m] < 0) {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }

}