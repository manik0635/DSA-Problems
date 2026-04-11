class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string cur;

        for(int i=0;i<=path.size();i++){
            if(i==path.size() || path[i]=='/'){
                if(cur==".." && !st.empty()) st.pop_back();
                else if(cur!="" && cur!="." && cur!="..") st.push_back(cur);
                cur="";
            } else cur+=path[i];
        }

        string res="";
        for(auto s:st) res+="/"+s;
        return res.empty()?"/":res;
    }
};
