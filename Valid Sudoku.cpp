class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        vector<set<char>> r(9), c(9), box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]=='.') continue;
                int k=(i/3)*3 + j/3;
                if(r[i].count(b[i][j]) || c[j].count(b[i][j]) || box[k].count(b[i][j]))
                    return false;
                r[i].insert(b[i][j]);
                c[j].insert(b[i][j]);
                box[k].insert(b[i][j]);
            }
        }
        return true;
    }
};
