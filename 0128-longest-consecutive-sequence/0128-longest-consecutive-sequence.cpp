class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.size()==0) return 0;
      map<int,int>m;
      for(auto x:nums) m[x]=-1;
      int ans=INT_MIN;
      for(auto x:nums)
      {
        if(m.count(x-1)==0)
        {
          int c=1;
          int num=x+1;
          while(m.count(num)!=0)
          {
            c++;
            num++;
          }
          ans=max(ans,c);
        }
      }
        return ans;
    }
};