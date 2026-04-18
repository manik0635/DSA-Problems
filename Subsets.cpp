class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        function<void(int)> f = [&](int i) {
            if (i == nums.size()) {
                res.push_back(temp);
                return;
            }
            f(i + 1);
            temp.push_back(nums[i]);
            f(i + 1);
            temp.pop_back();
        };
        f(0);
        return res;
    }
};
