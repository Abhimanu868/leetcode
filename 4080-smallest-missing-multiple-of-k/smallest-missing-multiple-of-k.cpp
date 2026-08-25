class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        for(int i=k; ;i+=k){
            if(st.find(i)==st.end()){
                return i;
            }
        }
        return -1;
    }
};