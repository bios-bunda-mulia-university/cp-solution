n = int(input())

for i in range(n):
  str = input()
  count_suvo = str.count('SUVO')
  count_suvojit = str.count('SUVOJIT')

  print("SUVO = {}, SUVOJIT = {}".format(count_suvo - count_suvojit, count_suvojit)
