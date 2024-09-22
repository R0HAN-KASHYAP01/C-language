#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello world";
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    int count = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("The total number of times \'%c\' is present in \"%s\" is %d\n", ch, str, count);
    return 0;
}
