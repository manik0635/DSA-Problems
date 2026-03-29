class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        vector<vector<int>> r;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && a[j]==a[j-1]) continue;
                int l=j+1,h=n-1;
                while(l<h){
                    long s=(long)a[i]+a[j]+a[l]+a[h];
                    if(s==target){
                        r.push_back({a[i],a[j],a[l],a[h]});
                        while(l<h && a[l]==a[l+1]) l++;
                        while(l<h && a[h]==a[h-1]) h--;
                        l++; h--;
                    } else if(s<target) l++;
                    else h--;
                }
            }
        }
        return r;
    }
};
