#include <stdio.h>

int main(){
    int sum, i;
    sum = 0;
    for ( i = 0; i <=10; i++)
    {
        sum += i;
    }
    printf("The Value of first 10 natural numbers is %d\n", sum);
    
    return 0;
}