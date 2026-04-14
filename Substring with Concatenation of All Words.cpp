class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if (s.empty() || words.empty()) return res;
        unordered_map<string,int> mp;
        for (auto &w: words) mp[w]++;
        int n = s.size(), m = words.size(), len = words[0].size();
        for (int i = 0; i < len; i++) {
            unordered_map<string,int> seen;
            int left = i, count = 0;
            for (int j = i; j + len <= n; j += len) {
                string w = s.substr(j, len);
                if (mp.count(w)) {
                    seen[w]++; count++;
                    while (seen[w] > mp[w]) {
                        seen[s.substr(left, len)]--;
                        left += len; count--;
                    }
                    if (count == m) {
                        res.push_back(left);
                        seen[s.substr(left, len)]--;
                        left += len; count--;
                    }
                } else {
                    seen.clear();
                    count = 0;
                    left = j + len;
                }
            }
        }
        return res;
    }
};
