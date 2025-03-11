//https://www.codechef.com/START153D/problems/BFLY

#include <bits/stdc++.h>
using namespace std;
void solve(int z, int y, int x)
{
    if ((z <= y + x) && (y <= z + x) && (x <= z + y))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int z, y, x;
        cin >> z >> y >> x;
        solve(z, y, x);
        }
}