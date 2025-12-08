class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                for(int k=j+1; k<=n; k++){
                    int a = i*i;
                    int b = j*j;
                    int c = k*k;

                    if((a+b)==c) count+=2;
                }
            }
        }
        return count;
    }
};