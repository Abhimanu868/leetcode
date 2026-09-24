class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int result = -1;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            while(nums[i]>0){
                int digit = nums[i]%10;
                sum+=digit;
                nums[i]/=10;
            }
            if(sum==i){
                result = max(result,i);
                break;
            }
        }
        return result;
    }
};