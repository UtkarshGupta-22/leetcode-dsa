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
     int f2(vector<int> &arr) {
         int n = arr.size();
        // vector<int>dp(n+1,0);
        // return f2(n-1,arr,dp);

        int prev = arr[0];
        int prev2 = 0;

        for (int i=1; i<n; i++){
            int take = arr[i];
            if(i>1) take +=prev2;
            int nottake = 0 + prev;

            int curi = max(take,nottake);
            prev2 = prev;
            prev = curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        vector<int>temp,temp2;
        for(int i=0; i<n; i++){
            if(i!=0) temp.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(f2(temp),f2(temp2));
    }
};