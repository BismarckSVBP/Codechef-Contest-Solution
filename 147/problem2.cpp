// https://www.codechef.com/START147D/problems/GOLDCOINS

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (c > d)
    {
        cout << a;
    }
    else if (c < d)
    {
        cout << b;
    }
}