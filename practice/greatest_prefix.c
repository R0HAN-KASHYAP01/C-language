#include <stdio.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    char prefix[]= "";
    for(int i = 0; i < strsSize; i++){
        char*s1 = strs[i];
        char* s2 = strs[i+1];
        for(int j = 0; s1[j] != '/0'; j++){
            if(s1[j] == s2[j]){
                prefix[j] = s1[j];
            }
        }
    }
    return prefix;
}
int main(){
    
    return 0;
}