class Solution {
public:
    vector<vector<string>> result;
    unordered_set<int> cols;
    unordered_set<int> diag;
    unordered_set<int> antiDiag;
    int N;

    bool isValid(vector<string>& board, int row, int col){
        //Look Upward
        for(int i=row-1; i>=0; i--){
            if(board[i][col] == 'Q'){
                return false;
            }
        }
        //Check left diagonal
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        //Check left diagonal
        for(int i=row-1, j=col+1; i>=0 && j<N; i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;        
    }
    void solve(vector<string>& board, int row){
        if(row>=N){
            result.push_back(board);
            return;
        }

        for(int col=0; col<N; col++){
            int diagConstant = row+col;
            int antiDiagConst = row-col;

            if(cols.find(col) != cols.end() || diag.find(diagConstant) != diag.end() || antiDiag.find(antiDiagConst) != antiDiag.end()){
                continue;
            }

            cols.insert(col);
            diag.insert(diagConstant);
            antiDiag.insert(antiDiagConst);
            board[row][col] = 'Q';

            solve(board,row+1);

            cols.erase(col);
            diag.erase(diagConstant);
            antiDiag.erase(antiDiagConst);
            board[row][col] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        N=n;
        vector<string> board(n, string(n,'.'));

        solve(board,0);

        return result;
    }
};