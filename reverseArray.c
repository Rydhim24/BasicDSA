#include<stdio.h>
void reversedArray(int array[], int start, int end){
    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
}
void rotateArray(int array[], int n, int k){
    k=k%n;
    //to reverse the full array
    reversedArray(array,0,n-1);
    //to reverse the first k elements
    // reversedArray(array,0,k-1);

}
int main(){
    int array[]={1,2,3,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    int k=3;
    rotateArray(array,n,k);
    printf("Rotated Array\n");
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
    }
    printf("\n");

}