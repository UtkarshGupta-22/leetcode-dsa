// Problem: 75. Sort Colors
// Link: https://leetcode.com/problems/sort-colors/
// Difficulty: Medium
// Approach: Counting Sort (2-pass)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;

        // Count the number of 0s, 1s, and 2s
        for (int num : nums) {
            if (num == 0) count0++;
            else if (num == 1) count1++;
            else count2++;
        }

        // Overwrite nums array based on counts
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
