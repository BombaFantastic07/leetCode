class Solution {
public:
    string removeOuterParentheses(string s) {
       int low = 0 , high = 0;
       string ans = "";
       deque<char> s1;
       for(int i = 0 ; i < s.length() ; i++){
            s1.push_back(s[i]);
            if(s[i]=='('){
                high++;low++;
            }
            if(s[i]==')'){
                high--;low--;
            }
            if(low<0) low = 0;
            if(high==0&&low==0){
                pt(s1,ans);
                s1.clear();
            }
       } 
       return ans;
    }
    void pt(deque<char> &s, string &ans){
        s.pop_front();
        s.pop_back();
        for(char x:s){
            ans+=x;
        }
    }
};