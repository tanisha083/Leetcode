
// problem : https://leetcode.com/problems/k-closest-points-to-origin/submissions/868010518/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<double, int>> dis2index;
        for(int i = 0; i < points.size(); i ++){
            double x = double(points[i][0]); 
            double y = double(points[i][1]);
            dis2index.push_back({sqrt(pow(x,2)+pow(y,2)),i});
        }
        sort( dis2index.begin(), dis2index.end());
        vector<vector<int>> res;
        for(int i = 0; i < k; i ++){
            res.push_back(points[dis2index[i].second]);
        }
        return res;

        

        
    }
};