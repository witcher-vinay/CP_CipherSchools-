class Solution {
public:
    int climbStairs(int n) {
       if(n==0 || n==1)
           return 1; 
        int a=1, b=1; 
        int c=2; int count=2; 
        while(count<=n)
        {
           c=a+b; 
            a=b; 
            b=c;
            count++; 
        }
        return c; 
    }
};