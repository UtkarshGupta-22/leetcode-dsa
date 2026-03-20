class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> result(m-k+1,vector<int>(n-k+1));

        for(int i=0; i<=m-k; i++){
            for(int j=0; j<=n-k; j++){
                set<int>val;

                for(int r=i; r<=i+k-1; r++){
                    for(int s=j; s<=j+k-1; s++){
                        val.insert(grid[r][s]);

                    }
                }

                if(val.size()==1){
                    result[i][j]=0;
                    continue;
                }
                int minDiff = INT_MAX;
                auto prev = val.begin();
                auto curr = next(prev);

                while(curr!=val.end()){
                    minDiff = min(minDiff, (*curr - *prev));
                    prev = curr;
                    curr++;
                }

                result[i][j] = minDiff;

            }
        }
        return result;
    }
};