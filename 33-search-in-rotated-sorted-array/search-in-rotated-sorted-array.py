class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left=0
        high = len(nums)-1
        while left<=high:
            mid = (left + high)//2
            if nums[mid]==target:
                return mid
            if nums[left] <= nums[mid]:
                if nums[left] <= target < nums[mid]:
                    high = mid-1
                else:
                    left = mid+1
            else:
                if nums[mid] < target<=nums[high]:
                    left=mid+1
                else:
                    high = mid-1

        return -1

