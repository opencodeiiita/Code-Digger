#include<stdio.h>
int binarysearch(int A[],int low,int high,int k){
	int mid;
	if(low>high){
		return 0;
	}
	mid=(low+high)/2;
	if(A[mid]==k){
		return 1;
	}
	else if(A[mid]>k){
		return (binarysearch(A,low, mid-1,k));
	}
	else{
		return (binarysearch(A,mid+1,high,k));
	}
}
int main(){
	int A[125],n,k,i,found;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the numbers of array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("Enter the number to be searched\n");
	scanf("%d",&k);
	found=binarysearch(A,0,n-1,k);
	if(found==1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
