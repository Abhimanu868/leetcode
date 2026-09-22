class Solution {
public:
    int findPivot(vector<int>&nums){
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int mid = left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        return right;
    }
    int BinarySearch(int left, int right, vector<int>&nums, int target){
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot_index = findPivot(nums);
        int idx = BinarySearch(0,pivot_index-1,nums,target);
        if(idx!=-1){
            return idx;
        }
        idx = BinarySearch(pivot_index,n-1, nums,target);
        return idx;
    }
};