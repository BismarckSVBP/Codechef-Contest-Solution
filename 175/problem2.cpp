//https://www.codechef.com/START175C/problems/P3_175

#include <bits/stdc++.h>
using namespace std;

vector<int> fn1(vector<string> &str)
{
    vector<int> count(3, 0);
    for (int i = 0; i < 3; i++)
    {
        for (char c : str[i])
        {
            if (c == '0')
            {
                count[i]++;
            }
        }
    }
    return count;
}

int fn2(vector<int> &count)
{
    int sum = 0;
    for (int num : count)
    {
        sum += num;
    }
    return sum;
}

int fn3(int n, vector<int> &count)
{
    int zeroCount = fn2(count);
    if (zeroCount % n != 0)
    {
        return -1;
    }

    int k = zeroCount / n;
    if (k == 0 || k == 3)
    {
        return 0;
    }

    sort(count.begin(), count.end(), greater<int>());

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += count[i];
    }

    return k * n - sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> str(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> str[i];
        }

        vector<int> count = fn1(str);
        cout << fn3(n, count) << endl;
    }
}
