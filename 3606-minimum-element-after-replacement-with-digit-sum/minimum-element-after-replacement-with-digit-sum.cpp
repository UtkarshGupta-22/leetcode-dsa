class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int sum=0;
            int n = nums[i];
            while(n>0){
                int dig = n%10;
                sum += dig;
                n = n/10; 
            }
            nums[i] = sum;
        }
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            mini = min(nums[i],mini);
        }
        return mini;
    }
};