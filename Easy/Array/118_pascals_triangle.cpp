// Problem: 118. Pascal's Triangle
// Link: https://leetcode.com/problems/pascals-triangle/
// Difficulty: Easy
// Language: C++
// Time Complexity: O(numRows^2)
// Space Complexity: O(numRows^2)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int m = numRows;
        vector< vector<int> > v;
        for(int i=1; i<=m; i++){
        vector<int>a(i);
        v.push_back(a);
    }
        for(int i=0; i<m; i++){
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                     v[i][j]=1;
            }
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    
    }
    return v;
    }
};
