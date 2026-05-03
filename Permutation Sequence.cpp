class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> fact(n,1), nums;
        for (int i = 1; i < n; i++) fact[i] = fact[i-1] * i;
        for (int i = 1; i <= n; i++) nums.push_back(i);
        k--;
        string res;
        for (int i = n; i > 0; i--) {
            int idx = k / fact[i-1];
            res += to_string(nums[idx]);
            nums.erase(nums.begin() + idx);
            k %= fact[i-1];
        }
        return res;
    }
};
