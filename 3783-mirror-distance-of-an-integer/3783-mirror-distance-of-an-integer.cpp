class Solution {
public:
    int mirrorDistance(int n) {
        int rn=0;
        int temp = n;
        while(temp>0){
            rn = (rn*10) + (temp%10);
            temp=(temp/10);
        }
        return abs(rn-n);
    }
};