// https://www.codechef.com/START176C/problems/LSU

#include <bits/stdc++.h>
using namespace std;

vector<int> fn2(string &s)
{
    vector<int> freq(26, 0);
    for (char ch : s)
    {
        freq[ch - 'A']++;
    }

    vector<int> count;
    for (int f : freq)
    {
        if (f > 0)
        {
            count.push_back(f);
        }
    }
    sort(count.begin(), count.end(), greater<int>());
    return count;
}

long long fn1(vector<int> &count, int c)
{
    long long ans = LLONG_MAX;
    for (int l = 0; l <= count.size(); l++)
    {
        long long temp1 = l * c;
        int temp2 = 1;

        for (int i = l; i < count.size(); i++)
        {
            for (int j = 0; j < count[i]; j++)
            {
                temp1 += temp2++;
            }
        }
        ans = min(ans, temp1);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        string s;
        cin >> n >> c >> s;
        vector<int> count = fn2(s);
        cout << fn1(count, c) << endl;
    }
    return 0;
}