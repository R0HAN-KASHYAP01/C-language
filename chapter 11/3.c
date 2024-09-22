#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,num;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int *arr;
    arr = (int*) calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number:-\n");
        scanf("%d",&num);
        arr[i] = num;
    }
    
    
    return 0;
}