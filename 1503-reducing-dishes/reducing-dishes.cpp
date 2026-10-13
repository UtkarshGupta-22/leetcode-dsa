class Solution {
public:
    int f(int i,vector<int>&arr, int time, vector<vector<int>>& dp){
        if(i==arr.size()) return 0;
        if(dp[i][time]!=-1) return dp[i][time];
        int pick = (time*arr[i]) + f(i+1,arr,time+1,dp);
        int notPick = f(i+1,arr,time,dp);
        return dp[i][time] = max(pick,notPick);
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return f(0,satisfaction,1,dp);
    }
};