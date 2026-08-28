class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==INT_MIN){
            return false;
        }
        int cnt = __builtin_popcount(n);
        if(cnt==1){
            return true;
        }
        return false;
    }
};