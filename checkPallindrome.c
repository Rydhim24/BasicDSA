#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool isPallindrome(char str[]){
    int start=0;
    int end=strlen(str)-1;
    while(start<end){
        while(start<end && !isalnum(str[start])){
            start++;
        }
        while(start<end && !isalnum(str[end])){
            end--;
        }
        if(tolower(str[start]) != tolower(str[end]) ){
            return false;
        }
        start++;
        end--;
    }
    return true;

}
int main(){
    char str[]="A man, a plan, a canal,: Panama";
    if(isPallindrome(str)){
        printf("the string is pallindrome.\n");
    }else{
        printf("the string is not a pallindorme.\n");
    }

    return 0;

}
