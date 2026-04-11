class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int r=m.size(), c=m[0].size();
        int l=0, h=r*c-1;

        while(l<=h){
            int mid=(l+h)/2;
            int val=m[mid/c][mid%c];
            if(val==t) return true;
            else if(val<t) l=mid+1;
            else h=mid-1;
        }
        return false;
    }
};
