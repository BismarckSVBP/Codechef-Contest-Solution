// https://www.codechef.com/START148D/problems/CAKEHALF
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int alice;
        int bob;
        int ans = 0;
        cin >> alice >> bob;
        if (alice == 0 && bob == 0)
        {
            cout << ans << endl;
            return 0;
        }
        else
        {
            while (alice != bob)
            {
                if (alice == bob)
                {
                    break;
                }
                else if (alice > bob)
                {
                    if (alice & 1 == 1)
                    {
                        int p = alice / 2 + 1;
                        ans = ans + p;
                        alice = alice - p;
                    }
                    else
                    {

                        int p = alice / 2;
                        ans = ans + p;
                        alice = alice - p;
                    }
                }
                else
                {
                    if (bob & 1 == 1)
                    {
                        int p = bob / 2 + 1;
                        ans = ans + p;
                        bob = bob - p;
                    }
                    else
                    {
                        int p = bob / 2;
                        ans = ans + p;
                        bob = bob - p;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}