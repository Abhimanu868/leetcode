class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>pr;
        for(int i=0; i<nums.size(); i++){
            pr.push_back({nums[i],i});
        }
        vector<int>ans;
        sort(pr.begin(),pr.end());
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int sum = pr[left].first+pr[right].first;
            if(sum==target){
                ans.push_back(pr[left].second);
                ans.push_back(pr[right].second);
                break;
            }
            else if(sum>target){
                right--;
            }else{
                left++;
            }
        }
        return ans;
    }
};