//https://www.codechef.com/START170C/problems/KO_MON

#include <bits/stdc++.h>

using namespace std;
bool comp(long long int a, long long int b) {
    return a > b;
}

int main() {
    // your code goes here
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, x;
        cin >> n >> x;
        long long int arr[n];
        for (long long int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n, comp);
        long long int r = 0;
        for (long long int i = 0; i < n; i++) {
            long long int s = arr[i] + (i * x);
            if (r <= s) {
                r = s;
            }
        }
        cout << r << endl;
    }
}