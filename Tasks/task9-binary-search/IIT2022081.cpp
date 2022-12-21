#include<iostream>
using namespace std;
bool binarysrc(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return 1;
            
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return 0;
    
}

int main(){
    int size;
    cin>>size;
    int target;
    cin>>target;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    if(binarysrc(arr,size,target)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No";
    }
     return 0;
    
        
   
}
