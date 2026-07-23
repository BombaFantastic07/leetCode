class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> s1;
        s1.push(-1);
        int maxi = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i]=='(') s1.push(i);
            else{
                s1.pop();
                if(s1.empty()){
                    s1.push(i);
                }
                else{
                    maxi = max(maxi,i-s1.top());
                }
            }
        }
        return maxi;
    }
};