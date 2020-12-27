T = int(input())

for i in range(T):
  n, k, p = list(map(int, input().split(' ')))
  list_k = list(map(int, input().split(' ')))
  
  c = 0
  for kval in list_k:
    if kval <= (p + c):
      c += 1

  if (k + p) <= n:
    print(p + c)
  else:
    print(-1)
