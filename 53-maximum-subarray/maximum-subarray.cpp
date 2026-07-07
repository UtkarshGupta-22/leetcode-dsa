class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //Brute
        // int n = nums.size();
        // int maxi=INT_MIN;
        // for(int i=0; i<n; i++){
        //     for(int j=i; j<n; j++){
        //         int sum=0;
        //         for(int k=i; k<=j; k++){
        //             sum += nums[k];
        //         }
        //         maxi = max(maxi,sum);
        //     }
        // }
        // return maxi;


        //Better
        // int n = nums.size();
        // int maxi = INT_MIN;
        // for(int i=0; i<n; i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum += nums[j];

        //         maxi = max(maxi,sum);
        //     }
        // }
        // return maxi;

        //Optimal
        int n = nums.size();
        int sum=0;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            sum += nums[i];

            maxi = max(sum,maxi);

            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};