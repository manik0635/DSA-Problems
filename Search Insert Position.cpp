#include <iostream>
using namespace std;

class Solution {
public:
int searchInsert(vector<int>& a, int t) {
    int l = 0, r = a.size() -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == t) return m;
        if(a[m] < t) l = m + 1;
        else r = m - 1;
    }
    return l;
}
};
