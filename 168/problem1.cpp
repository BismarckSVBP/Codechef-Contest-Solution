//https://www.codechef.com/START168C/problems/BIG

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int brr[n];
	    int max = INT_MIN;
	    for(int i=0;i<n;i++){
	       // cin >> arr[i];
	       if(arr[i] >max){
	           brr[i] =1;
	           max = arr[i];
	       }else{
	           brr[i]=0;
	       }
	       
	    }
	    for(int i=0;i<n;i++){
	      cout <<brr[i] <<" ";
	    }
	    cout << endl;
	}

}
