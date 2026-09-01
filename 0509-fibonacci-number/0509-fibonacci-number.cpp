class Solution {
public:
    int fib(int n) {
        return fibonacci(n, 0, 1);
    }
    int fibonacci(int n, int a, int b) {
        if (n == 0) return a;
        if (n == 1) return b;
        return fibonacci(n - 1, b, a + b);
    }
};