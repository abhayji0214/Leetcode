class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
       int result = solve(nums, 0, nums.size() - 1);

        if (result >= 0) {
            return true;
        } else {
            return false;
        }
            }
    int solve(vector<int>& nums, int i, int j) {
        if (i == j)
            return nums[i];

        int left = nums[i] - solve(nums, i + 1, j);
        int right = nums[j] - solve(nums, i, j - 1);

        return max(left, right);
    }
};