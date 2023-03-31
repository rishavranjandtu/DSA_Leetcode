class Solution {
public:
    int maxArea(vector<int>& h) {
      int l=0;
      int r=h.size()-1;
      int ans=INT_MIN;
      while(l<=r)
      {
        if(h[l]<h[r])
        {
         ans=max(ans,(r-l)*h[l]);
          l++;
        }
        else
        {
          ans=max(ans,(r-l)*h[r]);
          r--;
        }
      }
      return ans;
        
    }
};