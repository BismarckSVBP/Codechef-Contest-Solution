//https://www.codechef.com/START151D/problems/WEIGHTLIFT


#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    int sum = 0;
    if (a1 > a2) {
        sum = sum + a1;
    } else {
        sum = sum + a2;
    }
    if (b1 > b2) {
        sum = sum + b1;
    } else {
        sum = sum + b2;
    }
    if (c1 > c2) {
        sum = sum + c1;
    } else {
        sum = sum + c2;
    }
    cout << sum << endl;
}