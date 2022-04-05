class Solution:
    def average(self, salary) -> float:
        salary.sort()
        average = 0
        for i in range(1, len(salary)-1):
            average += salary[i]
        return float(average/(len(salary)-2))
