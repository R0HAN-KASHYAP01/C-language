   #include <stdio.h>
   
   int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = &arr[0];
    printf("The value of array using pointer is %d\n", *ptr);
    ptr = ptr + 2;
    printf("The value of array using pointer is %d\n", *ptr);
    
    return 0;
   }