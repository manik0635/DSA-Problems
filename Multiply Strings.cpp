class Solution {
public:
    string multiply(string a, string b) {
        if(a=="0" || b=="0") return "0";
        vector<int> v(a.size()+b.size(),0);

        for(int i=a.size()-1;i>=0;i--){
            for(int j=b.size()-1;j>=0;j--){
                int mul=(a[i]-'0')*(b[j]-'0');
                int sum=mul+v[i+j+1];
                v[i+j+1]=sum%10;
                v[i+j]+=sum/10;
            }
        }

        string ans="";
        for(int x:v){
            if(!(ans=="" && x==0)) ans+=to_string(x);
        }
        return ans;
    }
};
