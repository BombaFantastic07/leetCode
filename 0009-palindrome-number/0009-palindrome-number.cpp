class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long res = rev(x,0);
        if(res == x) return true;
        return false;
    }
    long long rev(int x, long long sum){
        if(x == 0){
            return sum;
        }
        sum = sum*10 + x%10;
        x/=10;
        return rev(x,sum);
    }
};