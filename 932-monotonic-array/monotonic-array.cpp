class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();

        bool INC = false;
        bool DES = false;

        for(int i=0; i<n-1; i++){
            if(nums[i]<nums[i+1]){
                INC = true;
            }
            if(nums[i+1] < nums[i]){
                DES = true;
            }
        } 
        if(INC && DES) return false;
        return true;
    }
};