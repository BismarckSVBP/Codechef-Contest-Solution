//https://www.codechef.com/START165C/problems/BDISC

#include <bits/stdc++.h>

using namespace std;
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        // reverse(arr, arr + n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
          
            if ((arr[i] - i) > 0) {
                sum = sum + arr[i] - i;
            }
        }

        cout << sum << endl;
    }
}