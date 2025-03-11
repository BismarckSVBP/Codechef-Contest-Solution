// https://www.codechef.com/START167C/problems/DELNQ

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count = 0;
        for (char c : str)
        {
            if (c == '0')
            {
                count++;
            }
        }
        if (count == str.length() || count == 0)
        {
            cout << str.length() << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}