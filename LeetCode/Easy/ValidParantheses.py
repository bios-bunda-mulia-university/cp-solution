class Solution:
    
    def __init__(self):
        self.bracket_pair = {
            '(': ')',
            '[': ']',
            '{': '}'
        }
    
    def isValid(self, s: str) -> bool:
        stack = []
        
        for char in s:
            if char in self.bracket_pair:
                stack.append(char)
            elif len(stack) > 0 and self.bracket_pair.get(stack[-1]) == char:
                stack.pop()
            else:
                return False
            
        return len(stack) == 0
        