class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
        if(n==1) return 0;
       int min = prices[0];
        int mini = 0;
        int maxi = INT_MIN;

       for(int i=1; i<n; i++){
            if(prices[i]<min){
                min = prices[i];
            }
            maxi = max(maxi, prices[i]-min);

       }
       return maxi;
      

    }
};