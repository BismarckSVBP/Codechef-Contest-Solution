//https://www.codechef.com/START173C/problems/COOLSUB


#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> fn(vector<int> &arr, int n)
{
    unordered_map<int, int> m;
    int i = 0;
    while (i < n)
    {
        m[arr[i]]++;
        i++;
    }
    return m;
}

int fn2(vector<int> &arr, unordered_map<int, int> &m, int n)
{
    int i = 0;
    while (i < n)
    {
        if (m.at(arr[i]) > 1)
            return arr[i];
        i++;
    }
    return -1;
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
        int i = 0;
        while (i < n)
        {
            cin >> arr[i];
            i++;
        }

        unordered_map<int, int> m = fn(arr, n);
        int temp = fn2(arr, m, n);

        cout << (temp != -1 ? "1\n" + to_string(temp) : "-1") << endl;
    }
    
}
