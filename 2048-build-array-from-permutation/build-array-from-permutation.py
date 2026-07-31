class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        nums2 = []  
        for i in range(0,len(nums)):
            nums2.append(nums[nums[i]])
        return nums2