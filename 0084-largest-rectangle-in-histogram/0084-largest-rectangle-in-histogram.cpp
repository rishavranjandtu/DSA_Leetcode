class Solution {
public:
   stack<int> s;
    stack<int> g;
    int prev[100000];
    int next[100000];
    
    void p(vector<int>& a,int n)
    {
        for(int i=0;i<n;i++)
        {
            while(!s.empty()&&a[s.top()]>=a[i])
            {
                s.pop();
            }
            if(s.empty()) prev[i]=-1;
            else prev[i]=s.top();
            s.push(i);
        }
    }
    
    void l(vector<int>& a,int n)
    {
        for(int i=n-1;i>=0;i--)
        {
            while(!g.empty()&&a[g.top()]>=a[i])
            {
                g.pop();
            }
            if(g.empty()) next[i]=n;
            else next[i]=g.top();
            g.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        p(heights,n);
        l(heights,n);
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,(next[i]-prev[i]-1)*heights[i]);
        }
        return ans;
    }
};