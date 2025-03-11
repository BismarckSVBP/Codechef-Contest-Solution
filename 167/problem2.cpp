// https://www.codechef.com/START167C/problems/LOTTERYTICK

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int c = arr[0];

        sort(arr, arr + n);
        long long int idx = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (arr[i] == c)
            {
                idx = i;
                break;
            }
        }
        long long int a = 1;
        if (idx > 0)
        {
            a = arr[idx - 1];
        }
        long long int b = 1e6;
        if (idx < n - 1)
        {
            b = arr[idx + 1];
        }
        if (idx != 0)
        {
            a = max(((c + arr[idx - 1] + 1) / 2), a);
        }

        if (idx != n - 1)
        {
            b = min(((c + arr[idx + 1]) / 2), b);
        }

        cout << max(0LL, b - a + 1) << endl;
    }
}