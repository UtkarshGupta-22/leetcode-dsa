class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = -1*nums[i];
                if(nums[left]+nums[right] == sum){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--;

                    left++;
                    right--;

                } 
                else if(nums[left]+nums[right] > sum){
                    right--;
                }
                else{
                    left++;
                }
                
            }
        }
        return ans;
    }
};