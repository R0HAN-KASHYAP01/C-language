#include <stdio.h>
#include <string.h>
char* mystrslice(char str[], int m, int n){
    char* ptr1 = &str[m];
    char* ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
    
}
int main(){
    char str[] = "Rohan";
    printf("%s\n", mystrslice(str, 1, 3));
    return 0;
}