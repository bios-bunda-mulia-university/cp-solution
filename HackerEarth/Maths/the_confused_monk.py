import functools
from math import gcd

def gx(data):
  return (functools.reduce(gcd, data))


def fx(data):
  return functools.reduce(lambda x, y: x * y, data)


n = int(input())
a = list(map(int, input().split()))[:n]

print((fx(a) ** gx(a)) % (10 ** 9 + 7))
