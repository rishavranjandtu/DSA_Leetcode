class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ////O(log n)////////
       /* sort(nums.begin(),nums.end());
        return nums[nums.size()/2];*/
        
        ////////O(n)////////////
       int count=0;
        int majority=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0) majority=nums[i];
            if(majority==nums[i]) count++;
            else count--;
        }
        return majority;
        
    }
};