class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[j]%2==0 && nums[i]%2==0){
                i++;
            }
            else if(nums[j]%2==0 && nums[i]%2!=0){
                swap(nums[j],nums[i]);
                i++;
                j--;
            }else{
                j--;
            }
        }
        return nums;
    }
};