#include<stdio.h>
int findDuplicate(int array[], int n){
    int tortoise=array[0];
    int hare=array[0];
    do{
        tortoise=array[tortoise];
        hare=array[array[hare]];
    }while(tortoise!=hare);
    tortoise=array[0];
    while(tortoise!=hare){
        tortoise=array[tortoise];
        hare=array[hare];
    }
    return hare;

}
int main(){
    int array[]={1,3,4,2,2};
    int n = sizeof(array)/sizeof(array[0]);
    int duplicate=findDuplicate(array,n);
    printf("the duplicate number is %d ",duplicate);
    return 0;
}