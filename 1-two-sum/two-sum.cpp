class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int moreNeeded = target - num;
            if(mpp.find(moreNeeded) != mpp.end()){
                return {mpp[moreNeeded],i};
            }
            mpp[num] = i;
        }
        return {-1,-1};
    }
};