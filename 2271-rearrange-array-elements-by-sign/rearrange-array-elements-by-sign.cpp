class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>a;
        vector<int>b;
        for(int i=0; i<n;i++){
            if(nums[i]>0)a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        vector<int>result(n);
        for(int i=0; i<n/2; i++){
            result[i*2] = a[i];
            result[i*2+1] = b[i];
        }
        return result;
    }
};