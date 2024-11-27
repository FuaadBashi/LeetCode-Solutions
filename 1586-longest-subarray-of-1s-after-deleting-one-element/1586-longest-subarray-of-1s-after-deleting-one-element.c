
int longestSubarray( int* nums, int size ){ 

    int right = 0, left = 0, max = 0, zeroCounter = 0;

    while( left < size){

        if(nums[left] == 0){
            ++zeroCounter;
        }

        while (zeroCounter > 1){
            if (nums[right] == 0){
                --zeroCounter;
            }
            ++right;
        }
        if (left - right > max){
            max = left - right;
        }

        ++left;
    }
    return max;
}
