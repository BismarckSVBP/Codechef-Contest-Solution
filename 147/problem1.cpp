//https://www.codechef.com/START147D/problems/INDEPENDENCE

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int orange, white, green;
        cin >> orange >> white >> green;
        if ((white + green) < orange - 1 || ((white + orange) < green - 1) || ((orange + green) < white - 1)) {
            cout << "NO" << endl;

        }
        else {
            cout << "YES" << endl;
        }



    }

}