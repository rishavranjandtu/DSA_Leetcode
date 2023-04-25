class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int xorr=0;
      for(auto x:nums)
      {
        xorr^=x;
      }
      return xorr;
        
    }
};