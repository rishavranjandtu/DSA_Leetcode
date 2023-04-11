class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int maj=0;
      int c=0;
      for(auto x:nums)
      {
        if(c==0) {maj=x; c=1;}
        else if(maj==x) c++;
        else c--;
      }
      return maj;
        
    }
};