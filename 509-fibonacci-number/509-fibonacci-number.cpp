class Solution {
public:
        int fib_num[40];

    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        
        if(fib_num[n]!=0)return fib_num[n];
        
        return fib_num[n] = fib(n-1)+fib(n-2);
    }
};