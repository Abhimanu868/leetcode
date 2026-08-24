class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int maj1 = NULL;
        for(int i=0; i<nums.size(); i++){
            if(cnt==0){
                maj1 = nums[i];
                cnt = 1;
            }
            else if(nums[i]==maj1){
                cnt++;
            }else{
                cnt--;
            }
        }
        return maj1;
    }
};