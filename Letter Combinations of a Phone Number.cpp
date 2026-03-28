class Solution {
public:
    vector<string> letterCombinations(string d) {
        if(d.empty()) return {};
        vector<string> m={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> r={""};
        for(char c:d){
            vector<string> t;
            for(auto &s:r)
                for(char x:m[c-'0'])
                    t.push_back(s+x);
            r=t;
        }
        return r;
    }
};
