class Solution(object):    
    def romanToInt(self, roman_string):
        roman = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        converted_roman = 0
        for key in range(0, len(roman_string)-1, 1):
            if roman[roman_string[key]] < roman[roman_string[key+1]]:
                converted_roman -= roman[roman_string[key]]
            else:
                converted_roman += roman[roman_string[key]]
        converted_roman += roman[roman_string[-1]]
        return converted_roman
    
