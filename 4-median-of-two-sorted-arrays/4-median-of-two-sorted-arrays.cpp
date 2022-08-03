class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        
        if(m>n) return  findMedianSortedArrays(nums2,nums1); //binary search has to take place from small array
        
        int low=0;
        int high=m;
        int median=((m+n)+1)/2;
        while(low<=high)
        {
            int cut1=(low+high)>>1; //for taking no of ele from 1st array
            int cut2=median-cut1;
            
            int l1=(cut1==0)?INT_MIN:nums1[cut1-1];
            int l2=(cut2==0)?INT_MIN:nums2[cut2-1];
            int r1=(cut1==m)?INT_MAX:nums1[cut1];
            int r2=(cut2==n)?INT_MAX:nums2[cut2];
            
            if(l1<=r2&&l2<=r1)
            {
                 if((m+n)%2 != 0)  //odd
                 {
                     return (double) (max(l1,l2));
                 }
                 else 
                 {
                return (double) (max(l1,l2)+min(r1,r2))/2;
                 } //even
            }
        
            else if(l1>r2)
            {
                high=cut1-1;
            }
            else if(l2>r1)
            {
                low=cut1+1;
            }
        }
        return 0.0;
    }
};