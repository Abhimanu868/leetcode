class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        int j = 0;
        for(int i=min; i<=max; i++){
            if(i!=nums[j]){
                ans.push_back(i);
                j--;
            }
            j++;
        }
        return ans;
    }
};