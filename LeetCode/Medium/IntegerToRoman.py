class Solution:
    def intToRoman(self, num: int) -> str:
        num_roman_pair = {
            1000: "M",
            900: "CM",
            500: "D",
            400: "CD",
            100: "C",
            90: "XC",
            50: "L",
            40: "XL",
            10: "X",
            9: "IX",
            5: "V",
            4: "IV",
            1: "I"
        }
        
        answer = ""
        
        for key, roman in num_roman_pair.items():
            if num > 0:
                while num >= key:
                    num -= key
                    answer += roman
            else:
                return answer

        return answer
    