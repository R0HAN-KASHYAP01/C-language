#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello world";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s\n", str);
    
    return 0;
}