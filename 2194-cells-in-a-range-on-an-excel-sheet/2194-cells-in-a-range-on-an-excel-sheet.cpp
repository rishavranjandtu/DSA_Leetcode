class Solution {
public:
    vector<string> cellsInRange(string s) {
      vector<string>ans;
     for(char a=s[0];a<=s[3];a++)
     {
       for(char b=s[1];b<=s[4];b++)
       {
         ans.push_back({a,b});
       }
     }
      return ans;
        
    }
};