class Solution {
public:
    vector<vector<int>> res;
    void f(vector<int>& nums, vector<int>& temp, vector<int>& used) {
        if (temp.size() == nums.size()) {
            res.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            if (i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
            used[i] = 1;
            temp.push_back(nums[i]);
            f(nums, temp, used);
            temp.pop_back();
            used[i] = 0;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp, used(nums.size(), 0);
        f(nums, temp, used);
        return res;
    }
};
