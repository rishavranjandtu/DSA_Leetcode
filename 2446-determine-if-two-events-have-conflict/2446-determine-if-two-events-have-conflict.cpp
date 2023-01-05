class Solution {
public:
    bool haveConflict(vector<string>& a, vector<string>&b) {
      
      if(a[1]>=b[0])
      {
        if(b[1]<a[0])
        {
         return false; 
        }
        else return true;
      }
      return false;
    }
};