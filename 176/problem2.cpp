// https://www.codechef.com/START176C/problems/RURT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x;
    int y;
    cin >> x >> y;
    if (x >= y)
    {
        cout << 0 << endl;
    }
    else
    {
        int k = 0;
        while (y > x)
        {
            k++;
            y = y - x;
        }
        cout << k << endl;
    }
}
