#include<stdio.h>


void search(int n,int A[],int x)
{
    int start=0,mid=0,end=n-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(x==A[mid])
        {
            printf("Element found at index: %d ",A[mid-1]);
            break;
        }

        else if(x<A[mid])
        end=mid-1;
    
        else
        start=mid+1;
    }
}

int main()
{
    int i,n,x;
    printf("Enter size of your array :\n");
    scanf("%d",&n);
    int B[n];
    printf("Enter your array: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }
    printf("Enter which element to search:\n ");
    scanf("%d",&x);
    search(n,B,x);
    return 0;
}
