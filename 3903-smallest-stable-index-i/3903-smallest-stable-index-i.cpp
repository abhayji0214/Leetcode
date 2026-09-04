class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxLeft=nums[0];
        for(int i=0;i<n;i++){
            maxLeft=max(maxLeft,nums[i]);
            int minRight=nums[i];
            for(int j=i;j<n;j++)
                minRight=min(minRight,nums[j]);
            if(maxLeft-minRight<=k)
                return i;
        }
        return -1;
    }
};
    