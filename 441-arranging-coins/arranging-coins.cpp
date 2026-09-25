class Solution {
public:
    int arrangeCoins(int n) {
        long long i=1;
        while(n>=i){
            n-=i;
            i++;
        }
        return i-1;
    }
};