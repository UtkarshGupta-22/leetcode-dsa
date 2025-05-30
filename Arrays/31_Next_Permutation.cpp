/*
Problem: Leetcode 31, Next Permutation
Link: https://leetcode.com/problems/<problem-title>/
Difficulty: Medium

Approach:
Two Pointer Approach

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx=-1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }

        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        reverse(nums.begin()+idx+1,nums.end());
        int j=-1;
        for(int i=idx+1; i<n; i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return;        
    }
};

