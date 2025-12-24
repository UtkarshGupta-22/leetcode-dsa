class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        vector<int>res;
        int n = nums.size();
        int j = n-1;
        while(i<j){
            if(nums[i]+nums[j]==target){
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            } 
            else if(nums[i]+nums[j]<target) i++;
            else j--;
        }
        return res;
    }
};