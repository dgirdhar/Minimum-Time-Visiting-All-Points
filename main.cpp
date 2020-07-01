class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;
        
        int startX = points[0][0];
        int startY = points[0][1];
            
        for (int i = 1; i < points.size(); ++i) {            
            int diffX = abs(points[i][0] - startX);
            int diffY = abs(points[i][1] - startY);
            
            res += diffX > diffY ? diffX : diffY;
            
            startX = points[i][0];
            startY = points[i][1];
        }
        
        return res;
    }
};
