class Solution {
public:
    bool f(int i, int j, string s1, string s2, string s3, vector<vector<int>> &dp){
        if(i==s1.size() && j==s2.size()) return true;
        int k = i+j;

        if(dp[i][j]!=-1) return dp[i][j];
        if (i<s1.size() && s1[i]==s3[k]){
            if(f(i+1,j,s1,s2,s3,dp)) return dp[i][j] = true;
        }
        if(j<s2.size() && s2[j] == s3[k]){
            if(f(i,j+1,s1,s2,s3,dp)) return dp[i][j] = true;
        }
        return dp[i][j] = false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.size();
        int n = s2.size();
        if(s3.size()!=m+n) return false;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(0,0,s1,s2,s3,dp);

    }
};