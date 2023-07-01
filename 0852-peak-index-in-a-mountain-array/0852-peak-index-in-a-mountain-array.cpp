class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int n=arr.size();
      int l=0;
      int h=n-1;
      while(l<=h)
      {
        int m=l+(h-l)/2;
        if(m>0&&m<n-1){
        if(arr[m]>arr[m-1]&&arr[m]>arr[m+1]) return m;
        else if(arr[m]<arr[m+1]) l=m+1;
        else h=m-1;}
        
        else if(m==0)
        {
          if(arr[m]>arr[m+1]) return m;
          else return m+1;
        }
        else if(m==n-1)
        {
          if(arr[m]>arr[m-1]) return m;
          else return m-1;
        }
      }
      return l;
        
    }
};