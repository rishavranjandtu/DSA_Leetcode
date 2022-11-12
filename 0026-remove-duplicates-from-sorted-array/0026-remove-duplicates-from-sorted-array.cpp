class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                nums[k++]=nums[i];
                m[nums[i]]=1;
            }
        }
        return m.size();
        
    }
};