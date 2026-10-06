class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        pervMap = {}    # val -> index
        for i, n in enumerate(nums):
            diff = target - n
            if diff in pervMap:
                return [pervMap[diff], i]
            pervMap[n] = i