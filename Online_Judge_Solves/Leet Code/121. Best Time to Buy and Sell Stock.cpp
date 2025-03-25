class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof = 0, curprof[100000], prof = 0;
        curprof[0] = INT_MAX;

        for (int i = 1; i < prices.size(); i++) {
            curprof[i] = min(curprof[i - 1], prices[i - 1]);
                prof = max(prof, prices[i] - curprof[i]);
        }
        return prof;
    }
};