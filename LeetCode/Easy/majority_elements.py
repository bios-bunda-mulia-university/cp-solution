# import collections

class Solution:
    def majorityElement(self, nums) -> int:
        counts = collections.Counter(nums)
        return max(counts.keys(), key=counts.get)
