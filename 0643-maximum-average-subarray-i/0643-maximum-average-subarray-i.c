double findMaxAverage(int* nums, int numsSize, int k) {

    if ( k == 0 ) return 0.0f;

    int *left  = nums;
    int *last  = left;
    int *right = nums + k - 1;

    double maxSum = 0.0f;
    double currSum = 0.0f;

    if(numsSize == 1){
        return (double) *nums;
    }

    while( left <= right ){  
        currSum += *left;
        ++left;
    }

    maxSum = currSum;
    
    left = nums;
    last = left;
    

    ++left;
    ++right;

    while ( right <= nums + numsSize - 1){
        
        currSum  -= *last;
        currSum  += *right;

        if ( currSum > maxSum ) {
            maxSum = currSum;
        }

        last = left;
        ++left;
        ++right;

    }

    return maxSum / k;

}