class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;
        while(i!=arr1.size() && j!=arr2.size()){
            ans.push_back(arr1[i]);
            i++;
            ans.push_back(arr2[j]);
            j++;
        }
        return ans;
    }
};