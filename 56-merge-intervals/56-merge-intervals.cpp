class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(),intervals.end());
        v.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=v.back()[1])
            {
                int end=max(intervals[i][1],v.back()[1]);
                
                v.back()[1]=end;
            }
            else
            {
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};