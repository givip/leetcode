int subarraySum(int* nums, int numsSize, int k) {
    int counter = 0;
    int *sums = malloc(numsSize * sizeof(int));
   
    if (numsSize == 1) 
        return nums[0] == k;
    
    sums[0] = nums[0];
    if (nums[0] == k)
        counter++;
    
    for (int i=1; i<numsSize; i++) {
        sums[i] = sums[i-1] + nums[i];
        if (nums[i] == k)
            counter++;
    }
    
    for (int i=2; i<=numsSize; i++) {
        for (int x=0; x+i-1<numsSize; x++) {
            int div = 0;
            if (x != 0) 
                div = sums[x-1];
            if (sums[x+i-1] - div == k)
                counter++;
        }
    }
    return counter;
}
