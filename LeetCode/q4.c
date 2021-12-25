#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main()
{
    int arr[] = {3, 2, 4};
    int size = 0;
    int *r = twoSum(arr, 3, 6, &size);
    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[j]+nums[i]==target)
            {
                int *ret = malloc(sizeof(int) * 2);
                ret[0] = i, ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
