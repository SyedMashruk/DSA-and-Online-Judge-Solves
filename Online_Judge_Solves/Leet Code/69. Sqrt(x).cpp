class Solution {
public:
    int mySqrt(int x) {
        long long int ans;
        for (long long int i = 0; i * i <= x; i++) {
            if (i * i == x) {
                ans = i;
            } else {
                ans = i;
            }
        }
        return ans;
    }
};