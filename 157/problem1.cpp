//https://www.codechef.com/START157C/problems/BSHORT

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count = 0;
        int count2 = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '1') {
                count++;
            }
        }
        count2 = str.length() - count;
        if (count == 0) {
            cout << count2 << endl;
        } else if (count%2==0){
            cout << '0'<< endl;
        } else {
            cout << '1' << endl;
        }
    }
    return 0;
}