//https://www.codechef.com/START148D/problems/FIGBOT

#include <bits/stdc++.h>

using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x2, y2;
        cin >> n >> x2 >> y2;
        string str;
        cin >> str;

        int x1 = 0;
        int y1 = 0;
        int flag = 0;

        for (int i = 0; i < n; i++) {

            if (str[i] == 'L') {
                x1 = x1 - 1;
            }
            else if (str[i] == 'R') {
                x1 = x1 + 1;
            }
            else if (str[i] == 'D') {
                y1 = y1 - 1;
            }
            else if (str[i] == 'U') {
                y1 = y1 + 1;
            }


            int dis = abs(x2 - x1) + abs(y2 - y1);


            if (dis <= (i + 1) && dis % 2 == (i + 1) % 2) {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }


        if (flag == 0) {
            cout << "No" << endl;
        }
    }


}