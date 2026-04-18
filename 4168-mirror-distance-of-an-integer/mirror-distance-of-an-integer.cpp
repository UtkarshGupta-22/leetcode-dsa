class Solution {
public:
    int reverseNumber(int n){
        int rev=0;
        while(n!=0){
            int rem = n%10;
            rev = rev*10 + rem;
            n = n/10; 
        }
        return rev;

    }
    int mirrorDistance(int n) {
        int n2 = reverseNumber(n);

        return abs(n-n2);
    }
};