class Solution {
public:
    bool checkValidString(string s) {
        int high = 0, low = 0;
        for(char x:s){
            if(x=='('){
                high++;low++;
            }
            else if(x==')'){
                high--;low--;
            }
            else{
                high++;low--;
            }
            if(low<0) low = 0;
            if(high<0) return false;
        }
        return (low == 0);
    }
};