class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(); //row
        int n = matrix[0].size(); // column

        vector<int>res;
        /*
        dir = 0: left to right print
                 constant(top)
        dir = 1: top to bottom print
                constant(right)
        dir = 2: right to left print
                constant (down)
        dir = 3: bottom to top print
                constant (left)
        */
        int left = 0;
        int top = 0;
        int down = m-1;
        int right = n-1;
        int total = m*n;
        int dir=0;
        while(res.size() < total){
            if(dir==0){
                for(int i=left; i<=right; i++){
                    res.push_back(matrix[top][i]);
                }
                top++;
            }

            if(dir==1){
                for(int i=top; i<=down; i++){
                    res.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir == 2){
                for(int i=right; i>=left; i--){
                    res.push_back(matrix[down][i]);
                }
                down--;
            }

            if(dir==3){
                for(int i=down; i>=top; i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;

            if(dir == 4) dir=0;

        }
        return res;
    }
};