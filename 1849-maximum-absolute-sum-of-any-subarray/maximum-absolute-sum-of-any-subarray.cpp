class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //two kadane's algo for each max and min
        int currMaxSum = nums[0];
        int maxSubSum = nums[0];
        for(int i=1; i<nums.size(); i++){
            currMaxSum = max(nums[i],currMaxSum+nums[i]);
            maxSubSum = max(maxSubSum,currMaxSum);
        }
        //min
        int currMinSum = nums[0];
        int minSubSum = nums[0];
        for(int i=1; i<nums.size(); i++){
            currMinSum = min(nums[i],currMinSum+nums[i]);
            minSubSum = min(minSubSum,currMinSum);
        }
        return max(abs(maxSubSum),abs(minSubSum));
    }
};