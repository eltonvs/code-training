class Solution(object):
    def subsets(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        return [
            [nums[i] for i in range(n) if mask >> i & 1]
            for mask in range(1 << n)
        ]
