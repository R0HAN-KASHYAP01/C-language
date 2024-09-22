#include <stdio.h>

int main(){
    int i;
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    int factorial = 1;
    for ( i = 1; i <= num; i++)
    {
        if (num > 1)
        {
        factorial *= i;
        }
        
    }
    printf("The factorial of the number %d is %d\n", num , factorial);
    return 0;
}