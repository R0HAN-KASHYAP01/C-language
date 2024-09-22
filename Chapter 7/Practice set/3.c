#include <stdio.h>

int main()
{
    int table[10];
    int *ptr = &table[0];
    for (int i = 1; i < 11; i++)
    {
        *ptr = 5 * i;
        ptr++;
    }
    printf("The table of 5 is:-\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", table[i]);
        ptr++;
    }

    return 0;
}