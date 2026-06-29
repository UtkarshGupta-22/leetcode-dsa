class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // 0(1) space

        int n = nums.size();

        int sum=0;

        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        int cs=0;

        for(int i=0; i<n; i++){
            int ls = cs;
            int rs = sum-cs-nums[i];

            if(ls==rs) return i;

            cs += nums[i];
        }
        return -1;



        // //O(n) space
        // int n = nums.size();
        // vector<int> left(n,0);
        // vector<int> right(n,0);


        // for(int i=1; i<n; i++){
        //     left[i] = left[i-1]+nums[i-1];
        // }

        // for(int j=n-2; j>0; j--){
        //     right[j] = right[j+1]+nums[j+1];
        // }

        // for(int i=0; i<n; i++){
        //     if(left[i] == right[i]){
        //         return i;
        //     }
        // }

        // return -1;




    }
};