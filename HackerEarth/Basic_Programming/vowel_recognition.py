vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

T = int(input())

while T > 0:
    s = input()
    length = len(s)
    count = 0
    for index, char in enumerate(s):
        if char in vowels:
            count = count + (length - index) * (index + 1)

    print(count)
    T = T - 1