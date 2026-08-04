class Solution {
public:
    int f(vector<int>& arr,int Target, int idx,vector<vector<int>>& dp){
        if(idx == 0)
            if(Target%arr[0]==0) 
                return Target/arr[0];
            else return 1e9;
        if(dp[idx][Target]!=-1) return dp[idx][Target];
        int nottaken = 0 + f(arr,Target,idx-1,dp);
        int taken = 1e9;
        if(arr[idx] <= Target){
            taken = 1 + f(arr,Target-arr[idx],idx,dp);
        }        
        return dp[idx][Target] = min(taken,nottaken);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans = f(coins,amount,n-1,dp);

        if(ans >= 1e9) return -1;
        return ans;
    }
};