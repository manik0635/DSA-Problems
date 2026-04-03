class Solution {
public:
    void solve(int i, vector<int>& c, int t, vector<int>& v, vector<vector<int>>& ans){
        if(t==0){
            ans.push_back(v);
            return;
        }

        for(int j=i; j<c.size(); j++){
            if(j>i && c[j]==c[j-1]) continue;
            if(c[j]>t) break;

            v.push_back(c[j]);
            solve(j+1, c, t-c[j], v, ans);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(), c.end());
        vector<vector<int>> ans;
        vector<int> v;
        solve(0, c, t, v, ans);
        return ans;
    }
};
