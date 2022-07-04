class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /////////O(nlogn)+O(n)////O(n)///////
        /*
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int j=0;
        for(auto x:s)
        {
            nums[j]=x;
            j++;
        }
        return j;
        */
        /////////////////////////////////////
        ///////////O(N)//////////////////////
        int i=0;
        int j=1;
        while(j!=nums.size())
        {
            if(nums[i]!=nums[j])
            {
                ++i;
                nums[i]=nums[j];
            }
            j++;
        }
       
        return i+1;
        
        
    }
};