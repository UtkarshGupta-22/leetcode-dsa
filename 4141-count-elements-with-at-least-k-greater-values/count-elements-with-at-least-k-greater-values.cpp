class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        int count2=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            int count=0;
            auto it = upper_bound(nums.begin()+i+1,nums.end(),nums[i]);
            count = nums.end() - it;
            if(count >= k) count2++;
        }    
        return count2;
    }
};