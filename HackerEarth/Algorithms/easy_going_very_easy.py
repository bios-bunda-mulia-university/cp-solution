T = int(input())

while T:
  N, M = list(map(int, input().split(' ')))
  arr = list(map(int, input().split(' ')))

  sorted_arr = sorted(arr)

  element = N - M
  diff = sum(sorted_arr[-element:]) - sum(sorted_arr[:element])

  print(diff)
  T -= 1
