#include <stdio.h>
// int* plusOne(int* digits, int digitsSize, int* returnSize) {
//     int rem, num = 0;
//     for (int i = 0; i < digitsSize; i++)
//     {
//         num = num * 10 + digits[i];
//     }
//     num += 1;
//     int * returnArray;
//     returnArray = (int*)malloc(*returnSize* sizeof (int));
//     for (int i = rerturSize; i >=0; i--)
//     {
//         rem = num % 10;
//         returnArray[i] = rem;
//     }
//     return returnArray;
    
    
// }
int main(){
    int nums[] = {1,2,4};
    nums[2]= nums[2] + 1;
    printf("%d\n", nums);    
    return 0;
}