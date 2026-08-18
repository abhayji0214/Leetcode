class Solution {
public:
    int largestInteger(vector<int>& param_1, int param_2) {
        unordered_map<int, int> count;
        int n = param_1.size();

        for (int i = 0; i <= n - param_2; i++) {
            unordered_set<int> seen;

            for (int j = i; j < i + param_2; j++) {
                seen.insert(param_1[j]);
            }

            for (int x : seen) {
                count[x]++;
            }
        }

        int ans = -1;

        for (auto& [x, freq] : count) {
            if (freq == 1) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};