//https://www.codechef.com/START152D/problems/CHOLY

#include <bits/stdc++.h>
using namespace std;
void fn(int x, int y, int z)
{
    double tp = x + 0.5 * y;

    int tg = x + y + z;
    int rm = 4 - tg;
    double op = 1.0 * (tg - x);
    double mp = tp + rm;
    if (mp > op)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    fn(x, y, z);

    return 0;
}
