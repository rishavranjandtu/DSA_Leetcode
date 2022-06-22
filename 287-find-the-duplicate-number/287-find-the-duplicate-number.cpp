class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       /*/////////////////////////////
                   //O(N) space//
        /////////////////////////////
       
       unordered_map<int,int> m;
        int maxx=0;
        int no;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>maxx){ maxx=m[nums[i]]; no=nums[i];}
        }
        return no;
        */
        
        //////////////////////////////////
                     //O(1) space///
        //////////////////////////////////
        
        int slow=nums[0];
        int fast=nums[0];
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
    }
};