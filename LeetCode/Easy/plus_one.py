class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i, num in [*enumerate(digits)][::-1]:
            if num != 9:
                digits[i] += 1
                break
            digits[i] = 0

        return [1] + digits if not digits[0] else digits
