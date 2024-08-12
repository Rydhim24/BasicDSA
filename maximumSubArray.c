#include<stdio.h>
int main(){
    int array[]={2,1,-3,4,1};
    int n = sizeof(array)/sizeof(array[0]);
    int max_current=array[0];
    int max_global=array[0];
    for(int i=1;i<n;i++){
        if(array[i]>max_current+array[i]){
            max_current=array[i];
        }else{
            max_current+=array[i];
        }
        if(max_current>max_global){
            max_global=max_current;
        }
    }
    int maximumSubArray=max_global;
    printf("Maximum SubArray is %d",maximumSubArray);

}