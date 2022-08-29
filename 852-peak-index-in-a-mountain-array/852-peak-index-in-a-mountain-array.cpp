class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h=arr.size()-1;
        int ans;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]<arr[mid+1]) {l=mid; ans=mid;}
            else h=mid;
        }
        return ans;
    }
};