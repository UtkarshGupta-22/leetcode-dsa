class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> all;
        string partial;
        int left=0,right=0;

        dfs(n,left,right,partial,all);
        return all;
    }

    private:
        void dfs(const int n, int left, int right, string &partial, vector<string>&all){
            if(left==n && right==n) all.push_back(partial);
            else {
                if(left<n){
                    partial.push_back('(');
                    dfs(n,left+1, right, partial, all);
                    partial.pop_back();
                }
                else{

                }

                if(left>right){
                    partial.push_back(')');
                     dfs(n, left, right+1, partial, all);
                    partial.pop_back();
                }
                else{
                    //Branch pruning
                }
            }
        }
        
};