class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      map<int,int>a;
      map<int,int> b;
      vector<int>x;
      vector<int>y;
      vector<vector<int>>ans;
      for(auto x:nums1) a[x]++;
      for(auto x:nums2) b[x]++;
      for(auto h:a)
      {
        if(b.count(h.first)==0) x.push_back(h.first);
      }
      for(auto h:b)
      {
        if(a.count(h.first)==0) y.push_back(h.first);
      }
      ans.push_back(x);
      ans.push_back(y);
      return ans;
        
    }
};