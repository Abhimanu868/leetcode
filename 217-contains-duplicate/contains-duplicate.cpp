class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 1;
        int i = 0;
        int j = 1;
        while(i!=nums.size() && j!=nums.size()){
            if(nums[i]==nums[j]){
                cnt++;
                i++;
                j++;
            }
            if(cnt>=2){
                return true;
            }
            i++;
            j++;
        }
        return false;
    }
};