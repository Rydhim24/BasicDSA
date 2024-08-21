#include<stdio.h>
int minimumOfRotatedSortedArray(int arr[], int n){
    int low=0;
    int high=n-1;
    while(low<high){
        int mid=( low+high )/2;
        if(arr[mid]>arr[high]){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    return arr[low];
}

int main(){
    int arr[]={3,4,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result=minimumOfRotatedSortedArray(arr,n);
    printf("%d is the minimum element.",result);
    return 0;
}