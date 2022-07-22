class Solution {
public:
    
    void np(vector<int>&nums, int n,int times,vector<int>&ans)
    {
        
        if(times==1)
        {
            ans=nums;
            return;
        }
        
        
        int pos=-1;
        int e_pos;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                pos=i-1;
                break;
            }
        }
        if(pos==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(int i=n-1;i>pos;i--)
            {
            if(nums[i]>nums[pos])
            {
                e_pos=i;
                break;
            }
            }
            
            swap(nums[pos],nums[e_pos]);
             reverse(nums.begin()+pos+1,nums.end());
        }
        np(nums,n,times-1,ans);
        
        
        
        
    }
    
    string getPermutation(int n, int k) {
        vector<int> nums(n);
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            nums[i]=i+1;
        }
        np(nums,n,k,ans);
        string a="";
        for(int i=0;i<n;i++)
        {
            char b=ans[i]+'0';
            a=a+b;
        }
        return a;
    }
};