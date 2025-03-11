// https://www.codechef.com/START153D/problems/KARR

#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> k1, vector<int> k2)
{
    for (int i = 0; i < k1.size(); i++)
    {

        cin >> k1[i];

        k2[i] = k1[i];
    }
    sort(k2.begin(), k2.end());

    int f = k1[0];

    for (int i = 1; i < k2.size(); i++)
    {
        if (k1[i] < f)
        {

            f = k1[i];
        }
    }

    int m = -1;

    for (int i = 0; i < k2.size(); i++)
    {
        if (k1[i] != k2[i])
        {
            m = max(m, k1[i]);
        }
    }
    if (m == -1)
    {
        return 0;
    }
    else
    {
        return m + f;
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;

        vector<int> a(m);

        vector<int> b(m);
        int answer = solve(a, b);
        cout << answer << endl;
    }
}