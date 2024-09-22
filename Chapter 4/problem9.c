#include <stdio.h>

int main(){
    int num;
    int i = 1;
    int factorial = 1;
    printf("Enter number:\n");
    scanf("%d", &num);
    while (i<=num)
    {
        if (num>1)
        {
        factorial *= i;
        i++;
        }
        
    }
    printf("The factorial of the number %d is %d\n", num , factorial);

    return 0;
}