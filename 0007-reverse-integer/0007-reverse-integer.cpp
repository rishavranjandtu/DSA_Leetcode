class Solution {
public:
    int reverse(int x) {
        int a;
        long long y=0;
        
        while(x!=0)
        {
            a=x%10;
            y=y*10+a;
            x=x/10;
        }
         return (y<INT_MIN||y>INT_MAX)? 0:y;
    }
};