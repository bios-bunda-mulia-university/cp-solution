class Solution(object):
    def __init__(self, sentence):
        self.s = sentence
    
    def lengthOfLastWord(self, sentence: str) -> int:
        self.sentence = sentence.strip()
        if not self.sentence:
            return 0
        return len(self.sentence.split()[-1])
    
def main():
    message = 'Hello world'
    solution = Solution(message)
    print(int(solution.lengthOfLastWord(message)))
    
if __name__ == '__main__':
    main()