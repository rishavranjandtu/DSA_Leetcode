class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxx=0;
        int no;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>maxx)
            {
                maxx=m[nums[i]];
                no=nums[i];
            }
        }
        return no;
    }
};