class Solution {
    public:
    bool isPalindrome(int x) {
    
        long long revertedNumber = 0;
        int original=x;
        if(x<0) return false;
        while (x >0) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
            
            
        }
        return original==revertedNumber;
    }
        
};
