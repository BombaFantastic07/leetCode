class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0;
        int flag = 0;
        if(x<0){
            flag = 1;
            x *= -1;
        }
        long long res = rev(x,0);
        if (res > INT_MAX || res < INT_MIN) return 0;
        if(flag == 1){
            return res*-1;
        }
        return res;
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