#include <stdio.h>
int removeDuplicates(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i; j < numsSize; j++)
        {
            if (nums[i] == nums[j + 1])
            {
                nums[j + 1] = '_';
            }
        }
    }
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                // Swap nums[j] and nums[j+1]
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
    int main()
    {
        int n = 9;
        if (n < '_')
        {
            printf("Hello world\n");
        }
        else
        {

            printf("Bye\n");
        }

        return 0;
    }