class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
#        nums = lisT(map(int,input.split()))
        nums2 = []
        nums2 += nums
        for i in nums:
            nums2.append(i)
        return nums2