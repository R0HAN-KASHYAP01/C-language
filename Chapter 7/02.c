#include <stdio.h>

int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the array\n", i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    
    return 0;
}