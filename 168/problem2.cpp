//https://www.codechef.com/START168C/problems/P2P

#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    string str1, str2;
    cin >> str1 >> str2;

    int countZero = 0;
    int oneCount = 0;
    bool flag = false;

    int i = 0;
    while (i < n) {
        oneCount += (str1[i] == '1' || str2[i] == '1') ? 1 : 0;
        // countZero += (str1[i] == '0' && str2[i] == '0') ? 1 : 0;
        flag |= (str1[i] != '1' && str2[i] != '0' || str1[i] != '0' && str2[i] != '1');
        i++;
    }

    cout << (oneCount == 0 ? "NO" : (flag || oneCount % 2 == 1 ? "YES" : "NO")) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}
