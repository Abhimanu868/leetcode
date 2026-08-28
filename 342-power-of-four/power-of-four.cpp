class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n<=0){
        return false;
       } 
        int num = n;
        long long i = 1;
        while(i<num){
            i*=4;
        }
        if(i==n){
            return true;
        }
        return false;
    }
};