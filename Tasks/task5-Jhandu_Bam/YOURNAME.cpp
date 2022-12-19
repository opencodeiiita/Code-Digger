#include<bits/stdc++.h>
using namespace std;
int up(int n,int &k)
{
    return k+n;
}
int main(void)
{
    int t;cin>>t;
    int x=0;
    while(t--)
    {
        int n;cin>>n;
        int ans=0;
        int a[n+1];
        int k=1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(a[1]==0)
        {
            if(n==1)
            {
               ans=1;
            }
            else
            {
               ans=0;
            }
        }
        else{
        while(k<=n)
        {
        if(a[k]==0){
        x++;}
        else{
            x=0;
        }
        if(a[k]==0 && x>3)
        {
         ans=0;
         break;   
        }
        if(up(a[k],k)==n)
        {
            ans=1;
            break;
        }
        if(k>1 && a[k]==0)
        {
            k--;
        }
    
        else if(up(a[k],k)>n)
        {
          ans=0;
          break;
        }
        else if(k>=1)
        {
            k=up(a[k],k);
        if(k==n)
        {
            ans=1;
            break;
        } 
        if(up(a[k],k)>n) 
        {
            if(up(a[k-1],--k)<n)
            {continue;}
            
            else
            {ans=0;
            break;
            }
        }
        else if(up(a[k],k)<n)
        {
            continue;
        }
        }
        }
        }
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
