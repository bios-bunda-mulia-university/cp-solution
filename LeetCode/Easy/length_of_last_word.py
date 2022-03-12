class Solution(object):    
    def lengthOfLastWord(self, sentence: str) -> int:
        sentence = sentence.strip()
        if not sentence:
            return 0
        return len(sentence.split()[-1])
