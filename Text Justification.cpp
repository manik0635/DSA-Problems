class Solution {
public:
    vector<string> fullJustify(vector<string>& w, int m) {
        vector<string> r;
        for (int i = 0, j, n = w.size(); i < n; i = j) {
            int len = w[i].size();
            for (j = i + 1; j < n && len + w[j].size() + j - i <= m; j++)
                len += w[j].size();
            string s = w[i];
            int sp = j - i - 1;
            if (j == n || sp == 0) {
                for (int k = i + 1; k < j; k++) s += " " + w[k];
                s += string(m - s.size(), ' ');
            } else {
                int even = (m - len) / sp, extra = (m - len) % sp;
                for (int k = i + 1; k < j; k++)
                    s += string(even + (k - i <= extra), ' ') + w[k];
            }
            r.push_back(s);
        }
        return r;
    }
};
