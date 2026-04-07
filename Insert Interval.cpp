class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& n) {
        vector<vector<int>> ans;
        int i=0, size=in.size();

        while(i<size && in[i][1]<n[0]) ans.push_back(in[i++]);

        while(i<size && in[i][0]<=n[1]){
            n[0]=min(n[0], in[i][0]);
            n[1]=max(n[1], in[i][1]);
            i++;
        }
        ans.push_back(n);

        while(i<size) ans.push_back(in[i++]);

        return ans;
    }
};
