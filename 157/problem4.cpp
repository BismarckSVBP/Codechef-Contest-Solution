//https://www.codechef.com/START157C/problems/ABNOMAT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;

        int num1[26] = {0};
        int num2[26] = {0};

        int i = 0;
        while (i < s1.size())
        {
            num1[s1[i] - 'a'] = 1;
            i++;
        }

        i = 0;
        while (i < s2.size())
        {
            num2[s2[i] - 'a'] = 1;
            i++;
        }

        bool flag = false;

        i = 0;
        while (i < 26)
        {
            if (num1[i] == 0 && num2[i] == 0)
            {
                flag = true;
                break;
            }
            i++;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
