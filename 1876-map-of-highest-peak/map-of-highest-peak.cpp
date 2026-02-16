class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();

        vector<vector<int>> height(m, vector<int>(n, -1));
        queue<pair<int,int>> q;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(isWater[i][j] == 1) {
                    height[i][j] = 0;
                    q.push(make_pair(i, j));
                }
            }
        }

        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        while(!q.empty()) {
            pair<int,int> p = q.front();
            q.pop();

            int x = p.first;
            int y = p.second;

            for(int l = 0; l < 4; l++) {
                int nx = x + dx[l];
                int ny = y + dy[l];

                if(nx >= 0 && nx < m && ny >= 0 && ny < n && height[nx][ny] == -1) {
                    height[nx][ny] = height[x][y] + 1;
                    q.push(make_pair(nx,ny));
                }
            }
        }

        return height;
  

    }
};