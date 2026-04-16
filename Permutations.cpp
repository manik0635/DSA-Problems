class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        function<void(int)> f = [&](int i) {
            if (i == nums.size()) {
                res.push_back(nums);
                return;
            }
            for (int j = i; j < nums.size(); j++) {
                swap(nums[i], nums[j]);
                f(i + 1);
                swap(nums[i], nums[j]);
            }
        };
        f(0);
        return res;
    }
};
