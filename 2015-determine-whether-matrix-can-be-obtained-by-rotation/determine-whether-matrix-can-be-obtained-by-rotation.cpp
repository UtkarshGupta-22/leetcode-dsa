class Solution {
public:
    void rotate(vector<vector<int>> & mat){
        int n = mat.size();

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(mat[i][j],mat[j][i]);
            }
        }

        for(int i=0; i<n; i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();

        for(int i=0; i<4; i++){
            bool equal=true;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(mat[i][j]!=target[i][j]){
                        equal = false;
                        break;
                    }
                }
                if(!equal){
                    break;
                }
            }

                if(equal) {
                    return true;
                }

                rotate(mat);
            }
        return false;
    }
};