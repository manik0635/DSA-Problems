class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256, -1);
        int res = 0, left = 0;
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] >= left) left = m[s[i]] + 1;
            m[s[i]] = i;
            res = max(res, i - left + 1);
        }
        return res;
    }
};
