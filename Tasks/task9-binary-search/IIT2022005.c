#include <stdio.h>
void asc(int a[],int n) 
{
	int i,j;
	for(i=0;i<n;i++) {
		for (j=i+1;j<n;j++) {
			if (a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int search(int a[],int low,int high,int k)
{
	int mid=(low+high)/2;
	if (low==high && a[mid]!=k) {
		return 0;
	}
	if (k>a[mid]) {
		low=mid+1;
		search(a,low,high,k);
	}
	else if (k<a[mid]) {
		high=mid-1;
		search(a,low,high,k);
	}
	else {
		return 1;
	}
}

int main()
{
	int n,i;
	printf("Enter your array size : ");
	scanf("%d",&n);
	int a[100];
	for (i=0;i<n;i++) {
		printf("Index %d : ",i);
		scanf("%d",&a[i]);
	}
	asc(a,n);
	int k,low=0,high=n-1;
	printf("Enter the number to be searched : ");
	scanf("%d",&k);
	if (search(a,low,high,k)==1) 
		printf("YES");
	else
	        printf("NO");
	return 0;
}
