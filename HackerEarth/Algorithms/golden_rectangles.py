n = int(input())

count = 0

for i in range(n):
  w, h = (map(float, input().split(' ')))
  ratio = (w / h) if w > h else (h / w)
  if 1.6 <= ratio <= 1.7:
    count += 1

print(count)
