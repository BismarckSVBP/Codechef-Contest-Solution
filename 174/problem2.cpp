//https://www.codechef.com/START174C/problems/BIGNAME

#include <bits/stdc++.h>
using namespace std;

void fn1(string &str)
{
    if (str[0] == 'z')
        cout << "-1" << endl;
    else
    {
        str[0] = str[0] + 1;
        cout << str << endl;
    }
}

string fn2(string &str, int n)
{
    string ans = str;
    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (str[i] < str[j])
            ans[i] = str[j];
        else if (str[i] > str[j])
            ans[j] = str[i];
        else
        {
            if (str[i] < 'z')
            {
                ans[i] = str[i] + 1;
                ans[j] = str[i] + 1;
            }
        }
        i++;
        j--;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        if (n == 1)
        {
            fn1(str);
            continue;
        }

        string ans = fn2(str, n);

        if (ans > str && string(ans.rbegin(), ans.rend()) > str)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}
