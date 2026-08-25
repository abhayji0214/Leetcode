class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int x = k;

        for (int num : nums) {
            if (num == x) {
                x += k;
            }
        }

        return x;
    }
};