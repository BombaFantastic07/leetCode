class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                str += tolower(s[i]);
            }
        }
        return (rev(str) == str);
    }
    string rev(string s) {
        string r = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            r += s[i];
        }
        return r;
    }
};