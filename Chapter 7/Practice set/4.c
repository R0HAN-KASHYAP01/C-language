#include <stdio.h>

int main()
{
    int table[10];
    int *ptr = &table[0];
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++)
    {
        *ptr = num * i;
        ptr++;
    }
    printf("The table of %d is:-\n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", table[i]);
        ptr++;
    }

    return 0;
}