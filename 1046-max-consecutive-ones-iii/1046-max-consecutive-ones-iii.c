int longestOnes(int* nums, int n, int k) {
    int i = 0, j = 0, ans = 0, zero = 0;
    while(j < n){
        zero += nums[j] == 0;
        while(zero > k) zero -= nums[i++] == 0;
        ans = ans < j-i+1 ? j-i+1 : ans;
        j++;
    }
    return ans;
}