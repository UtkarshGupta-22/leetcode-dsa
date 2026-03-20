class Solution {
public:
     int r, c;

    void f(vector<vector<int>>& g, int i, int j) {
        if (i < 0 || j < 0 || i >= r || j >= c || g[i][j] == 0)
            return;
        g[i][j] = 0;
        f(g, i + 1, j);
        f(g, i - 1, j);
        f(g, i, j + 1);
        f(g, i, j - 1);
    }

    int numEnclaves(vector<vector<int>>& g) {
        r = g.size();
        c = g[0].size();

        for (int j = 0; j < c; j++) {
            if (g[0][j] == 1) f(g, 0, j);
            if (g[r - 1][j] == 1) f(g, r - 1, j);
        }

        for (int i = 0; i < r; i++) {
            if (g[i][0] == 1) f(g, i, 0);
            if (g[i][c - 1] == 1) f(g, i, c - 1);
        }

        int ans = 0;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                if (g[i][j] == 1) ans++;

        return ans;
    }
};