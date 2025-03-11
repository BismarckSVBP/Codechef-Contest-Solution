//https://www.codechef.com/START169C/problems/P2169

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        string str2;
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                str2 += '0';
            } else {
                str2 += '1';
            }
        }
        cout << str2 << endl;
    }
}