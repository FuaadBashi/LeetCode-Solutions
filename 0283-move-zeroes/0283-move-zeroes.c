void swap( int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveZeroes(int* nums, int numsSize) {
    
    int *i = nums;
    int *j = nums + 1;

    if (numsSize <= 1) {
        return;
    }
   
    while (true) {


        if ( j > nums + numsSize -1 ) break;

        if (*i == 0 && *j != 0){
           swap(i , j);
           ++i;
           ++j;
           continue;
        } 

        if ( *i == 0 && *j == 0 ) {
            ++j;
            continue;
        }

        if ( *i != 0 ) {
            ++i;
            ++j;
            continue;
        }
    }
}