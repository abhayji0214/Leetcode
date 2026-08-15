class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        bool iszero=false;
        for(int num : nums){
            x= x^num;
            if(num!=0){
                iszero=true;
            }
        }
        if(x!=0){
            return nums.size();
        }
        if(iszero){
            return (nums.size()-1);
        }
        return 0;
    }
};