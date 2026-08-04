class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn = nums[0];
        int mx = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mn) {
                mn = nums[i];
            }
            if (nums[i] > mx) {
                mx = nums[i];
            }
        }

        vector<bool> vis(mx - mn + 1, false);

        for (int i = 0; i < nums.size(); i++) {
            vis[nums[i] - mn] = true;
        }

        vector<int> ans;

        for (int i = 0; i < vis.size(); i++) {
            if (vis[i] == false) {
                ans.push_back(i + mn);
            }
        }

        return ans;
    }
};