//https://www.codechef.com/START155D/problems/GCD_1
#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int prime(int start, int end)
{
    for (int i = start; i <= end; ++i)
    {
        if (check(i))
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<long long int>> arr(n, vector<long long int>(m));
        int s = 2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = prime(s, INT_MAX);
                s = arr[i][j] + 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}