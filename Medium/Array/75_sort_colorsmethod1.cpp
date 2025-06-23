// Problem: 75. Sort Colors
// Link: https://leetcode.com/problems/sort-colors/
// Difficulty: Medium
// Language: C++
// Time Complexity: O(n)
// Space Complexity: O(1) (extra space is constant integers)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;

        // Step 1: Count number of 0s, 1s, and 2s
        for (int num : nums) {
            if (num == 0) count0++;
            else if (num == 1) count1++;
            else count2++;
        }

        // Step 2: Overwrite original array based on counts
        for (int i = 0; i < nums.size(); i++) {
            if (count0 > 0) {
                nums[i] = 0;
                count0--;
            } else if (count1 > 0) {
                nums[i] = 1;
                count1--;
            } else {
                nums[i] = 2;
                count2--;
            }
        }
    }
};
