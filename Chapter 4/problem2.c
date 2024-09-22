#include <stdio.h>

int main(){
    int i ,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for ( i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    
    return 0;
}