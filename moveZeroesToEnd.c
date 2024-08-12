#include<stdio.h>
int main(){
    int array[]={0,1,0,3,12};
    int n = sizeof(array)/sizeof(array[0]);
    int nonZeroPosition=0;
    for(int i=0;i<n;i++){
        if(array[i]!=0){
            //swap
            int temp=array[nonZeroPosition];
            array[nonZeroPosition]=array[i];
            array[i]=temp;
            nonZeroPosition++;

        }
    }
    //print
    printf("Final Array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}