class Solution {
public:
    void findCombination(int idx, int target, vector<int>& arr, vector<int> &ds, vector<vector<int>>& ans ){
        if(idx==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
        }

        //pick up element
        if(arr[idx] <= target){
            ds.push_back(arr[idx]);
            findCombination(idx,target-arr[idx],arr,ds,ans);
            ds.pop_back();
        }
        
        findCombination(idx+1,target,arr,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;

        vector<int> ds;
        findCombination(0,target,candidates,ds,ans);
        return ans;        
    }
};