#include <stdio.h>
#include <string.h>

int main()
{

    char s1[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&s1[i]);
        fflush(stdin);
        
    }
    s1[5] = '\0';
    printf("%s\n",s1);
    return 0;
}