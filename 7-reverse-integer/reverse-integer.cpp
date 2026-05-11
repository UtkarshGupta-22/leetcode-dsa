class Solution {
public:
    int reverse(int x) {
        int cnt;
        int d;
        int rev=0;
        while(x!=0){
            d = x%10;
            x = x/10;
            
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && d > 7)) {
            return 0; // Will overflow
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && d < -8)) {
            return 0; // Will underflow
        }
            rev = (rev*10) + d;
        }
        return rev;
    }
};