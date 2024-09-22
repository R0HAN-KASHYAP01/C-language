#include <stdio.h>

int main()
{
    int num;
    int is_prime = 1;
    printf("Enter the number:-\n");
    scanf("%d", &num);
    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
        }
    }
    if (is_prime)
    {
        printf("The number %d is a prime number.\n", num);
    }
    else
    {

        printf("The number %d is not a prime number.\n", num);
    }

    return 0;
}