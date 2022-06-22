class Solution {
public:
   //////////////////////////////////////////////////
    //O(N^2)
    void sortColors(vector<int>& nums) {
       /* for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size()-1-i;j++)
            {
                if(nums[j+1]<nums[j])
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }*/
        /////////////////////////////////////////////
        //O(2N)
       
        /*vector<int> v(3,0);
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) v[0]++;
            else if(nums[i]==1) v[1]++;
            else v[2]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(i<v[0]) {nums[i]=0;}
            else if(v[0]<=i&&i<v[1]+v[0]){nums[i]=1;}
            else{ nums[i]=2;}
        }
        */
        
        /////////////////////////////////////////////
        //O(N)
        
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[low],nums[mid]);
                    low++; mid++;
                    break;
                    
                case 1: mid++; break;
                
                case 2: swap(nums[mid],nums[high]);
                         high--;      
            }
        }
        
    }
};