#include <stdio.h>

int mystrlen(char str[]){
    int i = 0;
    char c = '\0';
    int length = 0;
    while (str[i]!= c)
    {
        i++;
    }
    length = i;
    return length;
    
}
int main(){
    char str[6] = "Rohan";
    printf("The length of the %s is %d\n", str,mystrlen(str));
    return 0;
}