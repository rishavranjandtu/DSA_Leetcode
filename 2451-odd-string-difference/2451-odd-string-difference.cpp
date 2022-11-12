class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string,string>m;
        unordered_map<string,int>p;
        for(auto x:words)
        {
            string s="";
            for(int j=0;j<x.size()-1;j++)
            {
                s+=to_string(x[j+1]-x[j])+"_";
            }
                            p[s]++;
                            m[s]=x;
        }
        for(auto x:p)
        {
          if(x.second==1) return m[x.first];
        }
        return "";
    }
};