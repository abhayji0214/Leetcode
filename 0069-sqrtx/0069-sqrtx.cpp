class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        
       long l = 1, h = x / 2, ans = 0;
        while (l <= h) {
           long mid = l + (h - l) / 2;
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid < x) {
                ans = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return ans;
    }
};