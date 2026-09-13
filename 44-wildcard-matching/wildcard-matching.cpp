class Solution {
public:
    bool f(int i, int j, string &s, string &p,vector<vector<int>> &dp){
        
        if(i<0 && j<0) return true;
        if(i<0 && j>=0) {
            for(int ii=0; ii<=j; ii++){
                if(p[ii]!='*')return false;
            }
            return true; 
        
        }
        if(j<0 && i>=0){
            return false;
        }
        if(dp[i][j]!=-1) return dp[i][j];

        if(p[j]==s[i] || p[j]=='?') {
            return dp[i][j] = f(i-1,j-1,s,p,dp);
        }

        if(p[j]=='*'){
            return dp[i][j] = f(i-1,j,s,p,dp) || f(i,j-1,s,p,dp);
        }
        return dp[i][j] = false;
    }
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(m-1,n-1,s,p,dp);
    }
};