class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        int up = 0;
        int i = 0;
        string v[numRows];
        while (i < s.length()) {
            while (up < numRows && i < s.length()) {
                v[up] += s[i];
                up++;
                i++;
            }
            up -= 2;
            while (up > 0 && i < s.length()) {
                v[up] += s[i];
                up--;
                i++;
            }
        }
        string ans = "";
        for(int i = 0 ; i < numRows ; i++){
            ans += v[i];
        }
        return ans;
    }
};