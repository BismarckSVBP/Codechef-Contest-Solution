//https://www.codechef.com/START154D/problems/CALLIM
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N;
        cin >> k;
        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        int count = 0;
        int sum = 0;
        for (int i = 0; i < N; i++) {
            if (k-sum >=arr[i] ) {
                sum = sum + arr[i];
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;

    }
}