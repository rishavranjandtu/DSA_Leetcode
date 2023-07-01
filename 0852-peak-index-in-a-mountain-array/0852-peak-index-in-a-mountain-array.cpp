class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int n=arr.size();
      int l=0;
      int h=n-1;
      while(l<=h)
      {
        int m=l+(h-l)/2;
        if(arr[m]>arr[m-1]&&arr[m]>arr[m+1]) return m;
        else if(arr[m]>arr[m+1]) h=m;
        else l=m;
      }
      return l;
        
    }
};