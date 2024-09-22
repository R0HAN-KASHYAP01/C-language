#include <stdio.h>

void Ten_times(int *a)
{
    *a = 10 * (*a);
}
int main()
{
    int a = 5;
    Ten_times(&a);
    printf("The value of a is %d\n", a); 
    return 0;
}