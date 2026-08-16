class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long temp = x;
        long long rem = 0;
        while(x>0){
            rem = rem * 10 + (x % 10);
            x /= 10;;
        }
        return rem == temp;
    }
};