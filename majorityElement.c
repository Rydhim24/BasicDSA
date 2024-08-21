#include<stdio.h>
int majorityElement(int arr[], int n){
    int candidate = -1;
    int count = 0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }else if(arr[i]==candidate){
            count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==candidate){
                count++;
            }
        }
        if(count>n/2){
            return candidate;

        }else{
            return -1;
        }
} 

int main(){
    int arr[]={3,4,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=majorityElement(arr,n);
    if (result != -1){
        printf("result is %d\n",result);
    }else{
        printf("no major element\n");
    }
    return 0;

}