class Solution {
public:
    void getsubsets(vector<int>& nums, vector<int>& ans, int i,
                    vector<vector<int>>& allsubset) {

        if (i == nums.size()) {
            allsubset.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        getsubsets(nums, ans, i + 1, allsubset);
        ans.pop_back();

        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }

        getsubsets(nums, ans, i + 1, allsubset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allsubset;
        vector<int> ans;

        getsubsets(nums, ans, 0, allsubset);

        return allsubset;
    }
};