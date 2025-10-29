class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int noz=0;
        int noo=0;
        int notw=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0) noz++;
            if(nums[i]==1) noo++;
            else notw++;
        }
        for(int i=0; i<noz; i++) nums[i]=0; 
        for(int i=noz; i<noz+noo; i++) nums[i]=1; 
        for(int i=noz+noo; i<n; i++) nums[i]=2; 


    }
};