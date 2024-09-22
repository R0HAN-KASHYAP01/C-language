#include <stdio.h>

int main()
{
    int numbers[3];
    int tables[3][10];
    printf("Enter the numbers:-\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tables[i][j] = numbers[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The table of %d is:-\n", numbers[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d\n", tables[i][j]);
        }
    }

    return 0;
}
