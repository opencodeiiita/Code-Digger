
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    
    cout<<"enter array length: ";
    int n;cin>>n;

    int a[n];
    cout<<"enter element\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sorting
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    int t;
    cout<<"Enter the integer: ";
    cin>>t;
    //binarysearch
    int ST=0;
    int end=n-1;
    int mid;
    int ans=0;
    while(ST<=end)
    {
        mid=(ST+end)/2;
        if(a[mid]==t)
        {
            ans=1;
            break;
        }
        else if(t<a[mid])
        {
            end=mid-1;
        }
        else if(t>a[mid])
        {
            ST=mid+1;
        }
    }
    if(ans==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    
    }
    
}
