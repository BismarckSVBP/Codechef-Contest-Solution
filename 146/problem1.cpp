// https://www.codechef.com/START146D/problems/NOWINNER?tab=statement

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a;
        int b;
        int c;
        int m;

        cin >> a;
        cin >> b;
        cin >> c;
        cin >> m;

        int p = a - b;
        int n = b - c;
        int o = c - a;

        p = abs(p);
        n = abs(n);
        o = abs(o);

        if (p <= m || n <= m || o <= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}