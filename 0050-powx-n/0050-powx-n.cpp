class Solution {
public:
    double myPow(double x, int n) {
        long long r = n;

        if (r < 0) {
            x = 1 / x;
            r = -r;
        }

        return solve(x, r);
    }
    double solve(double x, long long r) {
        if (r == 0)
            return 1;

        double ans = solve(x, r / 2);

        if (r % 2 == 0)
            return ans * ans;

        return ans * ans * x;
    }
};