int* productExceptSelf(int* nums, int numsSize, int *returnSize) {

    long long int  calc = 1;
    int i, j, l, sum = 0;

    *returnSize=numsSize;

    int *ans=(int *)malloc(numsSize*sizeof(int));

    j = 0;
    bool iszero = false;
    int zeroCounter = 0;

    while(j < numsSize)
    {
        if(nums[j] == 0 ){
            iszero = true;
            ++zeroCounter;
            ++j;
        } else {
            calc*=nums[j];
            sum = calc;
            ++j;
        }
    }

    if (zeroCounter > 1){
        ans[0] = 0;
    } else if (zeroCounter < 2 && nums[0] == 0) {
        ans[0] = sum;
    } else if (zeroCounter >= 1 && nums[0] != 0) {
        ans[0] = 0;
    } else {
        ans[0] = sum/nums[0];
    }

    for(i = 1; i < numsSize ; ++i){
        if (iszero){
            if (  zeroCounter > 1) {
                ans[i] = 0;
            } else if (nums[i] == 0) {
                ans[i] = sum;
            } else {
                ans[i] = 0;
            }
        } else {
            ans[i] = sum / nums[i];
        }
    }


    return ans; 
}
