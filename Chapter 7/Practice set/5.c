#include <stdio.h>
void reverse_array(int arr[],int n){
    int temp;    
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

}
void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
    
int main(){
    int arr[5] = {1,2,3,4,5};
    PrintArray(arr,5);
    reverse_array(arr,5);
    PrintArray(arr,5);

    return 0;
}