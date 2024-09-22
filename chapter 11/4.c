#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int *arr;
    arr = (int*) malloc(n * sizeof(int));
    
    printf("The length of the array is %d\n", n);
    arr = realloc(arr, 2*sizeof(int));
    printf("Now the length of array is double that is %d\n",2*n);
    
    return 0;
}