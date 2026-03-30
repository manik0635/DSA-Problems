class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> r;
        function<void(string,int,int)> f = [&](string s,int o,int c){
            if(s.size()==2*n){ r.push_back(s); return; }
            if(o<n) f(s+"(",o+1,c);
            if(c<o) f(s+")",o,c+1);
        };
        f("",0,0);
        return r;
    }
};
