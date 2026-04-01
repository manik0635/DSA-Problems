class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int l=0,r=a.size()-1,first=-1,last=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]>=t) r=m-1;
            else l=m+1;
            if(a[m]==t) first=m;
        }
        l=0,r=a.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]<=t) l=m+1;
            else r=m-1;
            if(a[m]==t) last=m;
        }
        return {first,last};
    }
};
