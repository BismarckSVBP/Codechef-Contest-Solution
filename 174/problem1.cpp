// https://www.codechef.com/START174C/problems/HWFIN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x, y;
    cin >> x >> y;
    y = y * 10;
    int sum = x + y;
    if (sum >= 100)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
