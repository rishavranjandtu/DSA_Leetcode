class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int>ans(n+m,0);
      int i=m-1;
      int j=n-1;
      int k=m+n-1;
      while(i>=0&&j>=0)
      {
        if(nums1[i]<nums2[j])
        {
          ans[k--]=nums2[j--];
        }
        else 
        {
          ans[k--]=nums1[i--];
        }
      }
      while(i>=0) ans[k--]=nums1[i--];
      while(j>=0) ans[k--]=nums2[j--];
      nums1=ans;
        
    }
};