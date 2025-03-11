//https://www.codechef.com/START154D/problems/ADD12GAME

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int x = 0;
        while (x < N) {
            if (x + 1 > N || x + 2 > N) {
                cout << "ALICE" << endl;
                break;
            }
            else if (x + 1 == N || x + 2 == N) {
                cout << "BOB" << endl;
                break;

            }
            else {
                x++;
            }



        }
    }
}