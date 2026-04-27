class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
        vector<int> minf(26, INT_MAX);

        for (auto &s : w) {
            vector<int> f(26);
            for (char c : s) f[c-'a']++;
            for (int i = 0; i < 26; i++) minf[i] = min(minf[i], f[i]);
        }

        vector<string> res;
        for (int i = 0; i < 26; i++)
            while (minf[i]-- > 0)
                res.push_back(string(1, i+'a'));

        return res;
    }
};
