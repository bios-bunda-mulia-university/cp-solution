# Contributor: Jayaku Briliantio [BIOS-Bunda Mulia]

n = int(input())
numbers = list(map(int, input().split(' ')))

sorted_numbers = sorted(numbers)
minimum = sum(sorted_numbers[:-1])
maximum = sum(sorted_numbers[1:])

print(minimum, maximum)
