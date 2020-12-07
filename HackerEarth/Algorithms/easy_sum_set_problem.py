from collections import Counter

n = int(input())
a = list(map(int, input().split()))
m = int(input())
c = list(map(int, input().split()))

diff_list = []
for i in range(n):
  for j in range(m):
    diff_list.append(c[j] - a[i])


diff_list = Counter(diff_list)
answer = []

for key, value in diff_list.items():
  if value == n:
    answer.append(key)

answer = sorted(answer)
print(' '.join(map(str, answer)))