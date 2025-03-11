// https://www.codechef.com/START175C/problems/P2_175

#include <bits/stdc++.h>
using namespace std;

int fn3(int n)
{
    return (n > 3) ? n - 2 : n - 1;
}
bool fn2(int n)
{
    return (n == 1 || n == 3);
}

int fn1(int n)
{
    int count = 0;
    while (true)
    {
        if (fn2(n))
        {
            count++;
            break;
        }

        n = fn3(n);
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << fn1(n) << endl;
    }

    return 0;
}
