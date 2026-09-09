class Solution {
public:
    long long countCommas(long long n) {
        long long r=1000, ans=0;
        while(r<=n){
            ans = ans+(n-r+1);
            r=r*1000;
        }
    return ans;
    }

};