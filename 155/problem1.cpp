//https://www.codechef.com/START155D/problems/MINGCD_1

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
        vector<vector<long long int>> arr(n, vector<long long int>(m, 2));

        int a = 0;
        int b = 0;
        while (a < n && b < m)
        {
            arr[a][b] = 3;
            a++;
            b++;
        }
        if (n > m)
        {
           while(a<n){
               arr[a][m-1]=3;
               a++;
           }
        }
        else if (n < m)
        {
           while(b<m){
               arr[n-1][b]=3;
               b++;
           }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}