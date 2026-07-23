class Solution {
public:
    bool isValid(string s) {
        stack<int> s1;
        bool flag;
        int i = 0;
        while(i<s.length()){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                s1.push(s[i]);
            }
            else{
                if(s1.empty()) return false;
                if((s1.top()!='('&&s[i]==')')||
                (s1.top()!='{'&&s[i]=='}')||
                (s1.top()!='['&&s[i]==']')) return false;
                s1.pop();
            }
            i++;
        }
        return s1.empty();
    }
};