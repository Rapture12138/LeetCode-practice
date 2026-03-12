int removeElement(int* nums, int numsSize, int val) {
    int k = 0,temp = 0;
    for (int i = 0;i < numsSize;i++){
        if (nums[i] != val){ 
            nums[temp] = nums[i]; 
            temp++;
        }
        else
            k++;
    }  
    return temp;  
}
