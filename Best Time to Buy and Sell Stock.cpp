class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX, res = 0;
        for (int x : prices) {
            mn = min(mn, x);
            res = max(res, x - mn);
        }
        return res;
    }
};
