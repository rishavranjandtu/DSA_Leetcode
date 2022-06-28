class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int k=nums[0];
        int c=0;
        int maxx=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-1==k)
            {
                c++;
            }
            else if(nums[i]==k)
            {
                continue;
            }
            else
            {
               // cout<<c;
                maxx=max(maxx,c);
                c=0;
            }
            k=nums[i];
        }
        maxx=max(maxx,c);
        return maxx+1;
    }
};