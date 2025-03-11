//https://www.codechef.com/START158C/problems/BUYGAME

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long add = 0, ans = 0;
        vector<pair<long long, long long>> mrr(n);

        int i = 0;
        while (i < n)
        {
            cin >> mrr[i].first;
            i++;
        }

        i = 0;
        while (i < n)
        {
            cin >> mrr[i].second;
            mrr[i].first = mrr[i].first - mrr[i].second;
            add += mrr[i].second;
            i++;
        }

        sort(mrr.begin(), mrr.end());
        ans = add;
        add += mrr[0].first;

        i = 1;
        while (i < n)
        {
            add += mrr[i].first;
            ans = (add < ans) ? add : ans;
            i++;
        }

        cout << ans << endl;
    }

    return 0;
}
