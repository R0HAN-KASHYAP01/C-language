#include <stdio.h>

void Postive(int arr[],int n){
    int postive_num = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            postive_num++;
            printf("HEllo\n");
        }
        
    }
    printf("Total number of postive interger present in array is %d\n", postive_num);
    
}

int main(){
    int arr[] = {1,-2,3,-4,5,-6,7,-8,-9,10};
    Postive(arr,10);
    return 0;
}