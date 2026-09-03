class Solution {
public:
    bool f(int ind, int target,vector<int> &arr, vector<vector<int>> &dp){
        if(target==0) return true;
        if(ind==0) return (arr[0]==target);
        if(dp[ind][target]!=-1) return dp[ind][target];
        bool notTake = f(ind-1,target,arr,dp);
        bool take = false;
        if(target >= arr[ind]){
            take = f(ind-1,target-arr[ind],arr,dp);
        }
        return dp[ind][target] = take | notTake;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return f(n-1,sum,arr,dp);
    }
    bool canPartition(vector<int>& nums) {
        int totsum =0;
        int n = nums.size();
        for (int i=0; i<n; i++) totsum += nums[i];
        if(totsum%2) return false;
        int target = totsum/2;
        return isSubsetSum(nums,target);
    }
};