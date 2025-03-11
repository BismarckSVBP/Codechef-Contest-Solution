//https://www.codechef.com/START155D/problems/RCTGLD

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n = n / 2;


        int a = 1;
        int b = n - 1;
        vector < int > arr;
        while (a <= b) {
            int sum = a * b;
            arr.push_back(sum);
            a++;
            b--;
        }
        int maximum = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maximum) {
                maximum = arr[i];
            }
        }
        if (maximum == INT_MIN) {
            cout << 0 << endl;
        } else {
            cout << maximum << endl;
        }
    }
}