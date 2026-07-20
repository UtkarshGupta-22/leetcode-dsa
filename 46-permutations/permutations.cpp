class Solution {
public:
    void findPermutations(int idx, vector<int> & nums, vector<vector<int>>&ans){
        int n = nums.size();
        if(idx == n){
            ans.push_back(nums);
            return;
        }
        for(int i=idx; i<n; i++){
            swap(nums[idx],nums[i]);
            findPermutations(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        findPermutations(0,nums,ans);
        return ans;
    }
};