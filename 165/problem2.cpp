// https://www.codechef.com/START165C/problems/STABARR

#include <bits/stdc++.h>
using namespace std;

int solution(const vector<int> &arr, int n)
{
    int ans = 0;
    int i = n - 1;

    while (i > 0)
    {
        int j = i - 1;

        while (j >= 0 && arr[j] < arr[i])
        {
            j--;
        }

        ans = max(ans, i - j - 1);

        i = j;
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = solution(arr, n);
        cout << ans << endl;
    }
    return 0;
}
