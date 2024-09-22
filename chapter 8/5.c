#include <stdio.h>
#include <string.h>
void mystrcpy(char str[], char target[]){
    for (int i = 0; i < strlen(str); i++)
    {
        target[i] = str[i];
    }
    target[strlen(str)] = '\0';
}
int main(){
    char str[] = "Rohan";
    char target[30];
    mystrcpy(str, target);
    printf("The original string is %s.\nThe copy string is %s", str,target );
    return 0;
}