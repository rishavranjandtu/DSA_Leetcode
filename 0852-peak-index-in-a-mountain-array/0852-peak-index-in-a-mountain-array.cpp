class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int l=0;
      int h=arr.size();
      while(l<=h)
      {
        int m=(l+h)/2;
        if(arr[m-1]<arr[m]&&arr[m]>arr[m+1]) return m;
        else if(arr[m-1]<arr[m])l=m;
        else if(arr[m-1]>arr[m]) h=m;
      }
      return l;
        
    }
};