import math
T = int(input())

for i in range(T):
  a, b, c, d, K = list(map(int, input().split(' ')))
  t = (K / a) ** (1.0 / 3.0)
  t = math.ceil(t)
  t = int(t)
  time = a * t ** 3 + b * t ** 2 + c * t + d
  while time > K:
    t -= 1
    time = a * t ** 3 + b * t ** 2 + c * t + d
  
  if t >= 0:
    print(t)
  else:
    print(0)
