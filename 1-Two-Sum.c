/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *result = malloc(2 * sizeof(int));
    for (int i=0; i<numsSize-1; i++) {
        for (int y=i+1; y<numsSize; y++) {
            if (nums[i] + nums[y] == target) {
                result[0] = i;
                result[1] = y;
                return result;
            }
        }
    }
    return result;
}
