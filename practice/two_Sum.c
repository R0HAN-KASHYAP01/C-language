#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int sum=0;
    for (int i = 0; i < numsSize-1; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (i != j)
            {
            sum = nums[i] + nums[j];
            if (sum == target)
            {
                int* result = (int*) malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
            }
            
            
        }
        
    }
    *returnSize = 0;
    return NULL;
    
} 
int main(){
    
    return 0;
}