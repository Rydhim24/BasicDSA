#include<stdio.h>
#include<string.h>
char* longestCommonPrefix(char strs[][100], int n){
    if(n==0) return "";
    for(int i=0; i<strlen(strs[0]); i++){
        char c = strs[0][i];
        
        for(int j=1; j<n; j++){
            if(i==strlen(strs[j]) || strs[j][i] != c){
                
                strs[0][i]='\0';
                return strs[0];

            }
        } 
    }
    return strs[0];

}
int main(){
    char strs[][100]={"abcd", "fow", "light"};
    int n = sizeof(strs)/sizeof(strs[0]);
    char* result = longestCommonPrefix(strs, n);\
    printf("The longest common prefix is %s\n",result);

    return 0;

}