#include <stdio.h>

int binSearch(int arr[],int low, int high, int check);
void swap(int *x, int *y);
void bubbleSort(int arr[], int n); //if array not entered in ascending order.

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n); //n is size of array
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter num of array: "); //input array numbers
        scanf("%d", &arr[i]);
    }
    int check;
    printf("Enter element to check: "); //element to check using binSearch
    scanf("%d", &check);
    bubbleSort(arr,n);
    int ans = binSearch(arr,0,n-1,check);
    if (ans == 1){
        printf("YES\n"); return 0;
    }
    printf("NO\n");
    return 0;
}

int binSearch(int arr[], int low, int high, int check){
    int mid = (low+high)/2;
    if (low>high) return 0;
    if (check == arr[mid]) {
        return 1;
    }
    else if (check < arr[mid]){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
    
    binSearch(arr,low,high,check);

}

void swap(int *x, int *y){
    int temp = *y;
    *y = *x;
    *x = temp;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < (n-1)-i; j++){
            if (arr[j+1] < arr[j]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
