//https://www.codechef.com/START176C/problems/XLSL

#include <iostream>
using namespace std;

void solution(int t, int arr[][6]) {
    for (int i = 0; i < t; i++) {
        int X = arr[i][0], Y = arr[i][1], Z = arr[i][2];
        int A = arr[i][3], B = arr[i][4], C = arr[i][5];

        int count = 0;

      
        int small = (X < A) ? X : A;
        count += small, A -= small;

        int large = (Y < B) ? Y : B;
        count += large, B -= large;

        int extraLarge = (Z < C) ? Z : C;
        count += extraLarge, C -= extraLarge;

        
        int convert1 = ((Z - extraLarge) < B) ? (Z - extraLarge) : B;
        count += convert1, B -= convert1;

        int convert2 = ((Z - extraLarge - convert1) < A) ? (Z - extraLarge - convert1) : A;
        count += convert2, A -= convert2;

        int convert3 = ((Y - large) < A) ? (Y - large) : A;
        count += convert3, A -= convert3;

        cout << count << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    int arr[t][6]; 

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    
    solution(t, arr);

 
}
