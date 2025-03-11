// https://www.codechef.com/START151D/problems/GYMDAY
#include <bits/stdc++.h>

using namespace std;

void chek(int d, int x, int y)
{
    int count = 0;
    bool check = 0;
    while (count * d <= 100)
    {
        int m = (y - count);
        double n = x * (100 - count * d) / 100.0;
        if (n <= m)
        {
            check = true;
            cout << count << endl;
            break;
        }
        count++;
    }
    if (check == false)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, x, y;
        cin >> d >> x >> y;

        if (x == y)
        {
            cout << 0 << endl;
        }
        else
        {
            chek(d, x, y);
        }
    }
}