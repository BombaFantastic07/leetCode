class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int i = 1;
        int odd = pow(n,2);
        int eve = n*(n+1);
        return gcd(eve,odd);
    }
    int gcd(int x , int y){
        if(y==0) return x;
        return gcd(y,x%y);
    }
};