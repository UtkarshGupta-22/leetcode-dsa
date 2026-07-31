class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        nums2 = []
        nums2.append(nums[0])
        n = len(nums)
        for i in range(1,n):
            nums2.append(nums[i] + nums2[i-1])            
        return nums2