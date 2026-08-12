class Solution {
public:
    int f(int idx, vector<int> &arr,vector<int> &dp){
        if(idx==0) return arr[idx];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        
        int pick = arr[idx] + f(idx-2,arr,dp);
        int notPick = 0 + f(idx-1,arr,dp);
        
        return dp[idx] = max(pick,notPick);
    }
    int rob(vector<int> &arr) {
        int n = arr.size();
        vector<int>dp(n+1,-1);
        return f(n-1,arr,dp);
    }
};