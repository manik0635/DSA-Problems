class Solution {
public:
    vector<vector<int>> res;
    void f(int n, int k, int start, vector<int>& temp) {
        if (temp.size() == k) {
            res.push_back(temp);
            return;
        }
        for (int i = start; i <= n; i++) {
            temp.push_back(i);
            f(n, k, i + 1, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        f(n, k, 1, temp);
        return res;
    }
};
