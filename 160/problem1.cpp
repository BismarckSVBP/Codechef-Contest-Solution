// https://www.codechef.com/START160C/problems/ORANGES

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int m = 10 * n;
        int j = 12 * n;
        if (k >= m && k <= j)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}