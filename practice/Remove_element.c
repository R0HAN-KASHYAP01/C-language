#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i]!= val )
        {
            k++;
        }
        
    }
    return k;
    
}
int main(){
    int nums[] = {3,2,2,3};
    int val = 3;
    int numsSize = 4;
    int a = removeElement(nums,numsSize,val);
    printf("%d\n",a);
    
    return 0;
}