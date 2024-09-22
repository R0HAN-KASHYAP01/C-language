#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 7;
    int n;
    int n_new;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int *arr;
    arr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = num * (i+1);
        printf("%d X %d = %d\n", num, i + 1, arr[i]);

    }
    printf("Enter the new length of the array:-\n");
    scanf("%d",&n_new);
    arr = (int*) realloc(arr, n_new * sizeof(int));
    for (int i = n; i < n_new; i++)
    {
        arr[i] = num * (i+1);
        printf("%d X %d = %d\n", num, i + 1, arr[i]);
    }
    
    return 0;
}