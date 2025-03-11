//https://www.codechef.com/START174C/problems/DELDIF




#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        unordered_map < int, int > m;
        int count = 0;

        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
            if (arr[i] == 0) {
                count++;
            }
        }
        int a=count;
        count = 0;
      
        for (auto it = m.begin(); it != m.end(); ++it) {
            if (((it -> second) % 2 == 1) && (it -> first != 0)) {
               
                    count++;
               
            }
           
        }
        if(a!=0){
            count++;
        }else{
            if(count !=n){
                count++;
            }
        }
        cout << count << endl;
    }


}