class Solution {
public:
    int search(vector<int>& a, int target) {
        int l=0;
        int h=a.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(a[mid]==target) return mid;
            else if(a[l]<=a[mid])
            {
                if(target>=a[l]&&target<a[mid]) h=mid-1;
                else l=mid+1;
            }
            else
            {
                if(target>a[mid]&&target<=a[h]) l=mid+1;
                else h=mid-1;
            }
        }
        return -1;
    }
};