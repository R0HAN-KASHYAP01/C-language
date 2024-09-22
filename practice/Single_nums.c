#include <stdio.h>
int singleNumber(int* nums, int numsSize) {
    int single = 0; // Initialize to 0 because x ^ 0 = x
    for (int i = 0; i < numsSize; i++) {
        single ^= nums[i]; // XOR all elements
    }
    return single; // The result is the single number
}
int main(){
    int nums[] = {1,0,1};
    singleNumber(nums, 3);
    return 0;
}