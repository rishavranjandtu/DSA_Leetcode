class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
      int h=arr.size()-1;
      while(l<=h)
      {
        int m=(l+h)/2;
        if(arr[m]-m<=k) l=m+1;
        else h=m-1;
      }
      return l+k;
    }
};