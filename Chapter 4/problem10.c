#include <stdio.h>

int main()
{
    int num;
    int i;
    printf("Enter number:\n");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("The given number %d is not a prime number.\n", num);
            break;
        }
        else
        {
            printf("The given number %d is a prime number.\n", num);
        }
    }

    return 0;
}