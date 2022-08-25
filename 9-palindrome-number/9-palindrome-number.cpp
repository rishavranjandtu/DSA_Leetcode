class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int sum=0;
        int y=x;
        while(x!=0)
        {
            int a=abs(x%10);
            sum=sum*10+a;
            x=abs(x/10);
        }
        cout<<y<<sum;
        if(abs(sum)==abs(y)) return true;
        return false;
    }
};