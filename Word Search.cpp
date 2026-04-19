class Solution {
public:
    bool exist(vector<vector<char>>& b, string w) {
        int n = b.size(), m = b[0].size();
        function<bool(int,int,int)> dfs = [&](int i, int j, int k) {
            if (k == w.size()) return true;
            if (i < 0 || j < 0 || i >= n || j >= m || b[i][j] != w[k]) return false;
            char t = b[i][j];
            b[i][j] = '#';
            bool res = dfs(i+1,j,k+1) || dfs(i-1,j,k+1) || dfs(i,j+1,k+1) || dfs(i,j-1,k+1);
            b[i][j] = t;
            return res;
        };
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (dfs(i,j,0)) return true;
        return false;
    }
};
