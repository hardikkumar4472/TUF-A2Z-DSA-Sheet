class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int en=s.size()-1;
        while(st<=en){
            if (!isalnum(s[st])){
                st++;
                continue;
            }
            if (!isalnum(s[en])){
                en--;
                continue;
            }
            if (tolower(s[st])!= tolower(s[en])){
                return false;
            }
            else{
                st++;
                en--;
            }
        }
        return true;
    }
};