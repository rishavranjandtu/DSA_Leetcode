class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      int n=nums2.size();
      vector<int>v(n,-1);
        stack<int>s;
      s.push(nums2[n-1]);
      for(int i=n-2;i>=0;i--)
      {
        while(!s.empty()&&nums2[i]>s.top()) s.pop();
        if(s.empty()) v[i]=-1;
        else v[i]=s.top();
        s.push(nums2[i]);
      }
      map<int,int>m;
      for(int i=0;i<n;i++)
      {
        m[nums2[i]]=v[i];
      }
      int z=nums1.size();
      vector<int>ans(z,0);
      for(int i=0;i<z;i++)
      {
        ans[i]=m[nums1[i]];
      }
      return ans;
        
    }
};