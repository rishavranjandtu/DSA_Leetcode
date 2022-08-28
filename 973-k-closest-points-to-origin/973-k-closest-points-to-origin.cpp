class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>> h;
        for(int i=0;i<points.size();i++)
        {
            int d=pow(points[i][0],2)+pow(points[i][1],2);
            h.push({d,i});
            if(h.size()>k)
            {
                h.pop();
            }
        }
        vector<vector<int>>ans;
        while(h.size()>0)
        {
            ans.push_back(points[h.top().second]);
            h.pop();
        }
        return ans;
    }
};