#include <stdio.h>

int main()
{
    int numbers[3] = {2, 7, 9};
    int tables[3][10];

    // Filling the tables array with multiplication tables
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tables[i][j] = numbers[i] * (j + 1);
        }
    }

    // Printing the tables
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
