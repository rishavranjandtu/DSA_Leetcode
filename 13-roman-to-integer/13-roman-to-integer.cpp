class Solution {
public:
    int romanToInt(string s) {
         unordered_map<char,int> mp{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}};
        
        int ans =0;
        int i;
        for(i=1;i<s.length();i++){
            if(mp[s[i-1]]<mp[s[i]]){
                ans-=mp[s[i-1]];
            }
            
            else {
                ans+=mp[s[i-1]];
            }
        }
        
        ans+=mp[s[i-1]];
        return ans;
    }
};