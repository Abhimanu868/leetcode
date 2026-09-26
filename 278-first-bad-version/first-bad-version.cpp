// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;
        int i=1;
        int j=n;
        while(i<=j){
            int bad = i+(j-i)/2;
            bool version = isBadVersion(bad);
            if(version==true){
                ans = bad;
                j=bad-1;
            }else{
                i=bad+1;
            }
        }
        return ans;
    }
};