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
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int>dp(n+1,-1);
        vector<int>dp2(n+1,-1);
        vector<int>temp,temp2;
        for(int i=0; i<n; i++){
            if(i!=0) temp.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(f(temp.size()-1,temp,dp),f(temp2.size()-1,temp2,dp2));
    }
};