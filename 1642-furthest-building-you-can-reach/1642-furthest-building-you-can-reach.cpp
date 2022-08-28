class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>,greater<int>> h;
        for(int i=0;i<heights.size()-1;i++)
        {
            int diff=heights[i+1]-heights[i];
            if(diff>0)
            {
                h.push(diff);
            }
            if(h.size()>ladders)
            {
                bricks-=h.top();
                h.pop();
            }
            if(bricks<0) return i;
        }
        return heights.size()-1;
    }
};