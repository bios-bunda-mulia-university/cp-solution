class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        result = set()

        for i in range(len(nums) - 3):
            for j in range(i + 1, len(nums) - 2):
                left, right = j + 1, len(nums) - 1

                while left < right:
                    total = sum([nums[i], nums[j], nums[left], nums[right]])
                    if total == target:
                        result.add((nums[i], nums[j], nums[left], nums[right]))
                    if total < target:
                        left += 1
                    else:
                        right -= 1

        return result
