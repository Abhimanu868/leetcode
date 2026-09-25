class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return NULL;
        }
        int i=1;
        int j=x;
        int ans;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(mid<=x/mid){
                ans = mid;
                i = mid+1;
            }else{
                j = mid-1;
            }
        }
        return ans;
    }
};