class Solution {
public:
    void findSubsets(int idx, vector<int>& nums,vector<int>& ds, vector<vector<int>>& Subsets){
        int n = nums.size();
        Subsets.push_back(ds);
        for(int i=idx; i<nums.size(); i++){
            if(i!=idx && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            findSubsets(i+1,nums,ds,Subsets);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> Subsets;
        vector<int> ds;
        findSubsets(0,nums,ds,Subsets);
        return Subsets;
    }
};