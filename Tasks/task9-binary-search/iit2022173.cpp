#include<bits/stdc++.h>
using namespace std;

int main()
{
  int count = 0;
  //Enter the length of array which you want.
  int n;
  cin>>n;

  int a[n];
  for(int i = 0; i<n; i++)
  {
    cin>>a[i];
  }

  //Enter the number which yo want to search for.
  int b;
  cin>>b;

  for(int i = 0; i<n; i++)
  {
    if(a[i]==b){count++;}
  }

  if(count>0){cout<<"YES" <<endl;}
  else{cout<<"NO" <<endl;}

  return 0;

}