class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> list1, list2;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (img1[i][j] == 1) list1.push_back({i, j});
                if (img2[i][j] == 1) list2.push_back({i, j});
            }
        }
        
        map<pair<int, int>, int> translationCounts;
        int maxOverlap = 0;
        
        for (auto& p1 : list1) {
            for (auto& p2 : list2) {
                int dx = p2.first - p1.first;
                int dy = p2.second - p1.second;
                translationCounts[{dx, dy}]++;
                maxOverlap = max(maxOverlap, translationCounts[{dx, dy}]);
            }
        }
        
        return maxOverlap;
    }
};