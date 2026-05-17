class Solution {
public:
    int n;
    bool Solve(vector<int>& arr, int i){
        if(i>=n || i<0 ||arr[i]<0){
            return false;
        }
        if(arr[i]==0) return true;
        int jump = arr[i];
        arr[i] *= -1;
        bool a = Solve(arr, i - jump);
        bool b = Solve(arr, i + jump);

        return a || b;
    }
    bool canReach(vector<int>& arr, int start) {
        n = arr.size();

        return Solve(arr,start);
    }
};