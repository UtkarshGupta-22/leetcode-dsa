class Solution {
public:
    int n;
    bool Solve(vector<int>& arr, int i){
        if(i>=n || i<0 ||arr[i]<0){
            return false;
        }
        if(arr[i]==0) return true;
        arr[i] *= -1;
        bool a = Solve(arr, i - arr[i]);
        bool b = Solve(arr, i + arr[i]);

        return a || b;
    }
    bool canReach(vector<int>& arr, int start) {
        n = arr.size();

        return Solve(arr,start);
    }
};