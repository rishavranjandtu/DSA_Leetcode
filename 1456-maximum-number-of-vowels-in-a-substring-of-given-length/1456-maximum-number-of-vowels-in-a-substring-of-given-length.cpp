class Solution {
public:
     bool fun(int n)
     {
       if(n==0||n==4||n==8||n==14||n==20) return true;
       return false;
     }
    int maxVowels(string s, int k) {
      //vector<int>m(26,0);
      int ans=INT_MIN;
      int c=0;
      for(int i=0;i<k;i++)
      {
        if(fun(s[i]-'a')) c++;
      }
      ans=max(ans,c);
      int kk=0;
      for(int i=k;i<s.size();i++)
      {
       if(fun(s[i]-'a')) c++;
       if(fun(s[kk]-'a')) c--;
        kk++;
        ans=max(ans,c);
      }
      return ans;
        
    }
};