class Solution {
public:
    bool isNumber(string s) {
        int i = 0, n = s.size();
        while (i < n && s[i] == ' ') i++;
        if (i < n && (s[i] == '+' || s[i] == '-')) i++;
        bool num = false, dot = false, exp = false;
        for (; i < n; i++) {
            if (isdigit(s[i])) num = true;
            else if (s[i] == '.' && !dot && !exp) dot = true;
            else if ((s[i] == 'e' || s[i] == 'E') && num && !exp) {
                exp = true;
                num = false;
                if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-')) i++;
            } else if (s[i] == ' ') {
                while (i < n && s[i] == ' ') i++;
                return num && i == n;
            } else return false;
        }
        return num;
    }
};
