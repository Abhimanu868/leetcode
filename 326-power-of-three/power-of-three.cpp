class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        int num = n;
        long long i = 1;
        while(i<num){
            i*=3;
        }
        if(i==n){
            return true;
        }
        return false;
    }
};