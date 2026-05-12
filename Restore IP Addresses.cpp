class Solution {
public:
    vector<string> ans;

    void f(string&s,int i,int p,string t){
        if(p==4&&i==s.size()){
            ans.push_back(t.substr(0,t.size()-1));
            return;
        }
        if(p==4||i==s.size()) return;

        for(int l=1;l<=3&&i+l<=s.size();l++){
            string x=s.substr(i,l);
            if((x[0]=='0'&&x.size()>1)||stoi(x)>255) continue;
            f(s,i+l,p+1,t+x+".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        f(s,0,0,"");
        return ans;
    }
};
