class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int Max = INT_MIN;
        int Min = INT_MAX;
        int maxIdx = -1;
        int minIdx = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>Max){
                Max = nums[i];
                maxIdx = i;
            }
            if(nums[i]<Min){
                Min = nums[i];
                minIdx = i;
            }
        }
        int left = max(minIdx,maxIdx)+1;
        int right = n-min(minIdx,maxIdx);
        int both = min(minIdx,maxIdx)+1+(n-max(minIdx,maxIdx));
        return min({left,right,both});
    }
};