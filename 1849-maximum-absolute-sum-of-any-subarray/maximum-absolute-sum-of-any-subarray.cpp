class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int n = nums.size();

        int currSubSumMax = nums[0];
        int maxSubSumMax=nums[0];

        int currSubMin = nums[0];
        int minSubSumMin=nums[0];

        for(int i=1; i<n; i++){
            currSubSumMax = max(nums[i],nums[i]+currSubSumMax);
            maxSubSumMax = max(currSubSumMax,maxSubSumMax);

            currSubMin = min(nums[i],nums[i]+currSubMin);
            minSubSumMin = min(minSubSumMin,currSubMin);
        }
        return max(maxSubSumMax,abs(minSubSumMin));
    }
};