//https://www.codechef.com/START170C/problems/MINBOTTLES

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        sort(arr, arr + n);

        int l = n * x;
        int p = n;
        while (l > sum) {
            if (l-x>=sum) {
                l = l - x;
                p--;
            }else{
                break;
            }
        }
        cout << p << endl;

    }
}