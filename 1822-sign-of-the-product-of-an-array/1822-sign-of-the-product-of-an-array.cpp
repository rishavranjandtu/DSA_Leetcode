class Solution {
public:
    int arraySign(vector<int>& nums) {
      int prd=1;
      for(auto x:nums)
      {
        if(x<0) prd*=-1;
        else if(x==0) return 0;
      }
        return prd;
    }
};