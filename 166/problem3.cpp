// https://www.codechef.com/START166C/problems/WRAPGIFTS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int h, l, w;
        cin >> h >> l >> w;
        int a = 2 * ((h * l) + (l * w) + (w * h));
        cout << 1000 / a << endl;
    }
}
