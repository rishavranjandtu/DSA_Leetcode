class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> m;
        int c=0;
        for(char ch: allowed)
        {
            m[ch]++;
        }
        
        for(auto word:words)
        {
            for(char ch:word)
            {
                if(m.find(ch)!=m.end())
                {
                    m[ch]--;
                }
                else
                {
                    goto d;
                }
            }
            c++;
            d:
            continue;
        }
        return c;
    }
};