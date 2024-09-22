#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello world";
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int occur = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ch)
        {
            occur = 1;
            break;
        }
    }
    if (occur)
    {
        printf("Yes the character \'%c\' is present in the string \"%s\"\n", ch, str);
    }
    else
    {
        printf("No the character \'%c\' is present in the string \"%s\"\n", ch, str);
    }
    
    
    
}
