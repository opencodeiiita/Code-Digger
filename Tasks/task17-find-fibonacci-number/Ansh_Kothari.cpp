//Time Complexity of this code is O(n)
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n, vector<int>&dp) {
    if(n==1) return 0;
    if(n==2) return 1;

    if(dp[n]!=-1) return dp[n];

    return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
}

int main(){
   int t;
   cin>>t;
   vector<int>dp(1e5+10,-1);
   while(t--) {
    int n;
    cin>>n;
    cout<<fibonacci(n, dp)<<endl;
   }
}
