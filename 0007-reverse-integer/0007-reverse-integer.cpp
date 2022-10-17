class Solution {
public:
   int reverse(long long int x) {
        long long int num1 = 0;
        if (x >0 && x <= pow(2,31) -1) {
            while(x >0) {
                num1 = num1 * 10 + x%10;
                if (num1 > (pow(2,31) - 1)) {
                    return 0;
                }
                x = x / 10;
            }
        }
        else if(x<0 && x >= -pow(2,31)) {
            if (x == -pow(2,31)) {
                num1 = 0;
            }
            else {
                x = abs(x);
                while(x >0) {
                    num1 = num1 * 10 + x%10;
                    if (num1 >(pow(2,31))) {
                        return 0;
                    }
                    x = x / 10;
                }
                num1 = -num1;
            }
        }
        else {
           num1 = 0;
        }
        return num1;
    }
};