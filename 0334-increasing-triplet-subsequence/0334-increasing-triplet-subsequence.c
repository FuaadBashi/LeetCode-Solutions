bool increasingTriplet(int* nums, int size) {

    int first = 2147483647;
    int second = 2147483647;
    int last = second;

    for ( int i = 0; i < size; ++i){
        if ( nums[i] <= first){
            first = nums[i];
        } 
        if ( nums[i] <= second && nums[i] > first ){
            second = nums[i];
            last = second;
        }
        if ( nums[i] > last && nums[i] > second && nums[i] > first  ) {
            return true;
        }
    }
    return false;
}