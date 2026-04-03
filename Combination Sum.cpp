class Solution {
public:
    void solve(int i, vector<int>& c, int t, vector<int>& v, vector<vector<int>>& ans){
        if(t==0){
            ans.push_back(v);
            return;
        }
        if(i>=c.size() || t<0) return;

        v.push_back(c[i]);
        solve(i, c, t-c[i], v, ans);
        v.pop_back();

        solve(i+1, c, t, v, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(0, c, t, v, ans);
        return ans;
    }
};
