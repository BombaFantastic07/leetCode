class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long int s = rev(0,x);
        if(s == x) return true;
        return false;
    }
    long long int rev(long long int a ,long long int b){
        if(b!=0) return rev(a*10+b%10,b/10);
        return a;
    }
};