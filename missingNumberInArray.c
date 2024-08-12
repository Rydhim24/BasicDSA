#include<stdio.h>
int main(){
    int array[]={1,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    int maxNumber=n+1;
    int totalSum=(maxNumber*(maxNumber+1))/2;
    int arraySum=0;
    for(int i=0;i<n;i++){
        arraySum+=array[i];
    }
    int missingNumber=totalSum-arraySum;
    printf("The missing no. is %d\n",missingNumber);

}