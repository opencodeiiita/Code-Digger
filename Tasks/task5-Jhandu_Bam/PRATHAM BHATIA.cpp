#include<bits/stdc++.h>
#define int long long
using namespace std;
int par[100001];
int32_t main()
{
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n+1];
    
    for(int i=1;i<=n;i++)
   { par[i]=i;
   cin>>a[i];}
 queue<int>q;
 q.push(1);
 while(!q.empty())
 {
     int indx=q.front();
     q.pop();
     if(indx+a[indx]>=1&&indx+a[indx]<=n)
     {
         if(par[indx+a[indx]]==indx+a[indx])
        { par[indx+a[indx]]=-1;
         q.push(indx+a[indx]);
        }
        
     }
     if(indx+a[indx]-1>=1&&indx+a[indx]<=n)
     {
         if(par[indx+a[indx]-1]==indx+a[indx]-1)
        { par[indx+a[indx]-1]=-1;
         q.push(indx+a[indx]-1);
        }
        
     }
 }
   if(par[n]==-1)
   cout<<"YES";
   else
   cout<<"NO";
   cout<<'\n';
}
 return 0;
}