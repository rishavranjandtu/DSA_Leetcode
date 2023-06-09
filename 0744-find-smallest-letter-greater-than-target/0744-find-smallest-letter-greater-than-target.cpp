class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
      int n=l.size();
      int lo=0;
      int h=n-1;
      while(lo<=h)
      {
        int m=(lo+h)/2;
        if(l[m]>target) h=m-1;
        else lo=m+1;
      }
      return lo<n?l[lo]:l[0];
        
    }
};