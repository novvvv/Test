class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        for(int st = 0; st < str.length() / 2; ++st){
            int ed = str.length() -1 - st;
            if(str[st] != str[ed]) return false;
        }
        return true;
    }
};
