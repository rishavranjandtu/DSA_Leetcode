class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int m1=0;
      int m2=0;
      int c1=0;
      int c2=0;
      int n=nums.size();
      for(auto x:nums)
      {
         if(x==m1) c1++;
        else if(x==m2) c2++;
       else if(c1==0) {m1=x;c1=1;}
        else if(c2==0){m2=x;c2=1;}
        
        else {c1--; c2--;}
      }
      int a=0;
      int b=0;
      vector<int>ans;
     for(auto x:nums)
     {
       if(x==m1) a++;
       else if(x==m2) b++;
     }
      if(a>n/3) ans.push_back(m1);
      if(b>n/3) ans.push_back(m2);
      return ans;
        
    }
};