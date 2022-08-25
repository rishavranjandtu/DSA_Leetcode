class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minn=INT_MAX;
        int sum=0;
        for(int x:nums) minn=min(minn,x);
        for(int x:nums) sum+=x-minn;
        return sum;
    }
};