class Solution {
        public static int pivotIndex(int[] nums) {
            
        int totalSum = 0;
        int leftSum = 0;
        int rightSum = 0;
        
        for (int num : nums) {
            totalSum = totalSum + num;
        }

        if (leftSum == totalSum - nums[0]){
            return 0;
        }

        for (int i = 0; i < nums.length - 1; i++) {
            leftSum = leftSum + nums[i]; // total of leftside at index i
            rightSum = totalSum - leftSum - nums[i + 1]; // total of rigthside minus the next index nums
            if (rightSum == leftSum ){
                return i + 1;
            }

        }   
        
        return -1;   
    }


}