#include <stdio.h>

int main(){
    int n = 8;
    int i;
    int sum = 0;
    for (i = 0; i <= 10 ; i++)
    {
       sum += n*i;
    }
    printf("THe sum of the numbers occurring in the multiplication table of 8 is %d\n", sum);
    
    return 0;
}