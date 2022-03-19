class Solution(object):
    def multiply(self, num1: str, num2: str) -> str:
        int_num1, int_num2 = int(num1), int(num2)
        product = int_num1 * int_num2
        return str(product)
