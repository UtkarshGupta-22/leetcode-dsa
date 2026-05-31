class Solution {
public:
    int digitFrequencyScore(int n) {
        int score=0;
        while(n>0){
            int dig = n%10;
            score += dig * 1;
            n = n/10;
        }
        return score;
    }
};