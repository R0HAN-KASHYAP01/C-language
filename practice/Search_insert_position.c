#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            return i; // Target found, return its index
        } else if (nums[i] > target) {
            return i; // Target not found, but should be inserted at index i
        }
    }
    return numsSize; // Target is greater than all elements, insert at the end
}
int main(){
    
    return 0;
}