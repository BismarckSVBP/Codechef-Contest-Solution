//https://www.codechef.com/START171C/problems/ADVITIYA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        
        string ans = "ADVITIYA";
        int s = 0;

        for (int i = 0; i < 8; i++) {
            int temp = (str[i] - ans[i]);
            if(temp<=0){
                s = s + abs(temp);
            }else{
                int d = ('Z'-str[i]) + (ans[i]-'A' )+1;
                s = s + d;
            }
        }
        
        cout << s << endl;
    }
    return 0;
}
