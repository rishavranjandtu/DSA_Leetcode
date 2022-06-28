class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /////////////O(nlogn)+O(N)/////////// 
        /*
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
        */
        //////////////////////////////////
        
        ///////////O(3N)//////////////////
        if(nums.size()==0) return 0;
        unordered_map<int,int> m;
        int maxx=INT_MIN;
        for(int x:nums) {m[x]=-1;}
        for(int x:nums) 
        {
            if(m.find(x-1)==m.end())
            {
                int count=1;
                int curr_no=x+1;
                
                while(m.find(curr_no)!=m.end())
                {
                    curr_no++;
                    count++;
                }
                maxx=max(maxx,count);
            }
        }
        return maxx;
    }
};