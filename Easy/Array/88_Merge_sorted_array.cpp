// Problem: 88. Merge Sorted Array
// Link: https://leetcode.com/problems/merge-sorted-array/
// Difficulty: Easy
// Approach: Reverse Two-Pointer (in-place)
// Time Complexity: O(m + n)
// Space Complexity: O(1)

 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Start from the end of nums1 and nums2
        int i = m - 1; // Last index of initialized elements in nums1
        int j = n - 1; // Last index of nums2
        int k = m + n - 1; // Last index of nums1

        // Merge in reverse order
        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If nums2 still has elements, copy them
        while(j >= 0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        // No need to copy the remaining elements of nums1 since they are already in place
    }
};
