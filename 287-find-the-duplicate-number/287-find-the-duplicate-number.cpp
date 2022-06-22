class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxx=0;
        int no;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>maxx){ maxx=m[nums[i]]; no=nums[i];}
        }
        return no;
    }
};