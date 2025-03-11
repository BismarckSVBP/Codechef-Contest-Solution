//https://www.codechef.com/START149D/problems/P2149

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while (t--) {
        int m, n, o;
        cin >> m >> n >> o;
        if (o * o >= m * n) {
            cout << "0" << endl;
        }
        else {
            if (m <= o * o) {
                cout << "1" << endl;

            }
            else if (n <= o * o) {
                cout << "1" << endl;
            }
            else {
                cout << "2" << endl;
            }
        }
    }
}