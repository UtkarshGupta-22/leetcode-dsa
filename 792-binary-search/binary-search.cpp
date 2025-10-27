class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        long long lo=0;
        long long hi=n-1;
        long long mid;
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid] > target) hi--;
            else lo++;
        }
        return -1;
    }
};