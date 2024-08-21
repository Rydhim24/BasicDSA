#include<stdio.h>

int search(int arr[], int n, int target){
    int low=0;
    int high=n-1;
   
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[low]<= arr[mid]){
            //left is sorted
            if(target>=arr[low] && target<arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            //right is sorted
            if(target>arr[mid] && target<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }

        }
    }
    //not found element
    return -1;    
}

int main(){
    int arr[]={23,45,0,121,36};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target=121;
    int result=search(arr,n,target);
    if (result != -1) {
        printf("Target found at index: %d\n", result);
    } else {
        printf("Target not found\n");
    }
    
    return 0;
}