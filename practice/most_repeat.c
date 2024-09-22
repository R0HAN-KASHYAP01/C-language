#include <stdio.h>
int majorityElement(int* nums, int numsSize) {
    int max_num = nums[0];
    int max_count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[j] == nums[i])
            {
                count++
            }
            
        }
        if (count > max_count)
        {
            max_num = nums[i];
            max_count = count;
        }
        
        
    }
    return max_num;
    
}
int main(){
    
    return 0;
}