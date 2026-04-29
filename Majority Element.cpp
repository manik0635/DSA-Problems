class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, cand = 0;
        for (int x : nums) {
            if (count == 0) cand = x;
            count += (x == cand) ? 1 : -1;
        }
        return cand;
    }
};
