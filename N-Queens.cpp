class Solution {
public:
    vector<vector<string>> res;
    void f(int n, int r, vector<string>& b, vector<int>& c, vector<int>& d1, vector<int>& d2) {
        if (r == n) {
            res.push_back(b);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (c[i] || d1[r+i] || d2[r-i+n]) continue;
            b[r][i] = 'Q';
            c[i] = d1[r+i] = d2[r-i+n] = 1;
            f(n, r+1, b, c, d1, d2);
            b[r][i] = '.';
            c[i] = d1[r+i] = d2[r-i+n] = 0;
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> b(n, string(n, '.'));
        vector<int> c(n), d1(2*n), d2(2*n);
        f(n, 0, b, c, d1, d2);
        return res;
    }
};
