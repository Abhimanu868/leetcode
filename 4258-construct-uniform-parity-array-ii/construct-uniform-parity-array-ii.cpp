class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd = nums1[0];
        int cnt = 0;
        for(int i=0; i<nums1.size(); i++){
            odd = min(odd,nums1[i]);
            if(nums1[i]%2==0){
                cnt++;
            }
        }
        if(odd%2!=0 || cnt==nums1.size()){
            return true;
        }
        return false;
    }
};