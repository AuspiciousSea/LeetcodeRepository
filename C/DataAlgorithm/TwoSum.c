﻿/**
*给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 *你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
 *示例:
 *给定 nums = [2, 7, 11, 15], target = 9
 *因为 nums[0] + nums[1] = 2 + 7 = 9
 *所以返回 [0, 1]

 *来源：力扣（LeetCode）
 *链接：https://leetcode-cn.com/problems/two-sum
 *著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i = 0, j = 0;
    int *array_return = (int *)malloc(sizeof(int) * 2);

    for (i=0; i<numsSize; i++)
    {
        for (j=i+1; j<numsSize; j++)
        {
            if (target == nums[i] + nums[j])
            {
                array_return[0] = i;
                array_return[1] = j;
                *returnSize = 2;
                break;
            }
        }
    }
    return array_return;
}