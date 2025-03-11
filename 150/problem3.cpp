//https://www.codechef.com/START150D/problems/RATIO2

#include <bits/stdc++.h>

using namespace std;



int main() {

    // your code goes here

    int k;

    cin >> k;

    while (k--) {

        int a, b;

        cin >> a >> b;

        int maxi = max(a, b);

        int mini = min(a, b);

        int m = 0;
        m = max(0, mini - (maxi) / 2);
        int n = 0;
        n = max(0, 2 * mini - maxi);

        cout << min(m, n) << endl;

    }

}