class Solution {
public:
    int firstIndex(vector<int>&arr,int target){
        int left = 0;
        int right = arr.size()-1;
        int ans = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]==target){
                ans = mid;
                right = mid-1;
            }else if(arr[mid]<target){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return ans;
    }
    int lastIndex(vector<int>&arr,int target){
        int left = 0;
        int right = arr.size()-1;
        int ans = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]==target){
                ans = mid;
                left = mid+1;
            }else if(arr[mid]<target){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = firstIndex(nums,target);
        int right = lastIndex(nums,target);
        return {left,right};
    }
};