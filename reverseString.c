#include<stdio.h>
#include<string.h>
void reverseString(char str[]){
    int start=0;
    int end=strlen(str)-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main(){
    char str[]="hello";
    reverseString(str);
    printf("Reversed string is %s ",str);
    return 0;
}