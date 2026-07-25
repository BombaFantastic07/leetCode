class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for(int i = 0 ; i < s.length() ; i++){
            string temp = "";
            unordered_set<char> rs;
            int count = 0;
            for(int j = i ; j < s.length() ; j++){
                if(rs.count(s[j])) break;
                temp+=s[j];
                rs.insert(s[j]);
                count++;
            }
            if(count>max){
                max = count;
            }
        }
        return max;
    }
};