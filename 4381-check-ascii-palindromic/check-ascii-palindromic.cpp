class Solution {
public:
    bool isPalindromic(string s) {
        string str = "";
        for(char ch:s){
            str+=bitset<8>(ch).to_string();
        }
        int i=0;
        int j=str.size()-1;
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};