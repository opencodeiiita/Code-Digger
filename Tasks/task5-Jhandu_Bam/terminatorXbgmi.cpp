#include <bits/stdc++.h>
using namespace std;
#define int long long


void jhndu_blam(int index , int limit , vector<int> &v  , vector<int> &dp){
  
// 1
// 5
// 1 2 5 1 2

// 2
// 4
// 3 0 2 -3
// 5
// 0 2 4 3 1


  if(index == limit -1){
    dp[index] = 1;
    return;
  }

  if(index-1>=0 ){
    // cout<<"index-1 "<<index-1<<endl;
    if(dp[index-1] == -1){
       dp[index-1] = 1;
    jhndu_blam(index-1  , limit , v , dp);
   
    }
    
  }
  if(index + v[index] <limit  ){
    // cout<<"index+v[index] "<<index+ v[index]<<endl;
        if(dp[index + v[index]] == -1){
            dp[index + v[index]] = 1;
        jhndu_blam(index + v[index] , limit , v , dp);
      
  }
  }


}


signed main()
{
 int t;
 cin >> t;
 while (t--)
{
  int n;
  cin>>n;

  vector<int>v;
  vector<int>dp(n, -1);
  for(int i = 0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  } 


   jhndu_blam(0 , n , v , dp);

   if(dp[n-1] == 1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    
    
    
}
return 0;
}
