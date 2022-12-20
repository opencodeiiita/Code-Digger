#include<bits/stdc++.h>
#define int long long
using namespace std;
int par[100001];
int find(int a)
{
    if(a==par[a])
    return a;
    else
    return par[a]=find(par[a]);
}
void unionn(int a,int b)
{
    int x=find(a);
    int y=find(b);
    par[y]=x;
}
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
    par[i]=i;
    for(int i=1;i<=n;i++)
   { cin>>a[i];
   if(i+a[i]<=n&&i+a[i]>=0)
   unionn(i,i+a[i]);
   if(i+a[i]-1>=0&&i+a[i]<=n)
   unionn(i,i+a[i]-1);
   }
   if(find(1)==find(n))
   cout<<"YES";
   else
   cout<<"NO";
   cout<<'\n';
}
 return 0;
}