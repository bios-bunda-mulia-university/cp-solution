class Solution(object):      
    def mySqrt(self, number):
        left = 1
        right = number
        while left <= right:
            mid = int((left + right) / 2)
            if number < (mid * mid):
                right = mid - 1
            elif number > (mid * mid):
                left = mid + 1
            else:
                return mid
        return right
    # Prohibited  
    # def mySqrt(self, number):
    #     if number < 0:
    #         return
    #     return int(number ** .5)
