//Time Complexity of this code is O(n)
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n, vector<int>&dp) {
    if(n==0) return 0;
    if(n==1) return 1;

    if(dp[n]!=-1) return dp[n];

    return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
}

int main(){
   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fibonacci(n, dp)<<endl;
   }
}
