int missingNumber(int* nums, int numsSize) {
    int ans = (numsSize * (numsSize +1)) /2;
    for(int i = 0;i <numsSize;++i){
        ans -=nums[i];
    }
    return ans;
}
