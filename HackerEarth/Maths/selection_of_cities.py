for _ in range(int(input())):
  n = int(input())
  p = int(1e9 + 7)
  print(pow(2, n, p) - 1)
