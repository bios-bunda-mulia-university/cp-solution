n = int(input())
data = tuple(map(int, input().split('')))
print(max(data, key=data.count))