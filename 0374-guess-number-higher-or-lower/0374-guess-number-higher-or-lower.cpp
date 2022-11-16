/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
      long long l=0;
      long long h=n;
      long long rr;
      while(l<=h)
      {
        long long mid=(l+h)/2;
        long long r=guess(mid);
        if(r==0) return mid;
        else if (r==-1) h=mid-1;
        else if(r==1) l=mid+1;
        rr=mid;
      }
      return rr;
        
    }
};