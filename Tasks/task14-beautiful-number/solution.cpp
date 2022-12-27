#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long 
#define mod 1000000007

int main()
{
FIO;
ll t;cin>>t;
//input
for(int i=1;i<=t;i++){
    int m=i;
    while( (int)log10(m)+1!=1){
        int k=m;int sum=0;
        for(int j=0;j<(int)log10(m)+1;j++){
            sum=sum+k%10;
            k=k/10;
        }
        m=sum;
      
    }
    if(m==2||m==3||m==5||m==7){
            cout<<i<<endl;
        }
}
//solution
return 0;
}