class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=rec1[0];
        int x2=rec1[2];
        int y1=rec1[1];
        int y2=rec1[3];
        int x3=rec2[0];
        int x4=rec2[2];
        int y3=rec2[1];
        int y4=rec2[3];
        
        if(x3>=x2||x1>=x4||y3>=y2||y1>=y4) return false;
        
        return true;
    }
};