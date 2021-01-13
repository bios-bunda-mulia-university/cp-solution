def bubble_sort(A, n):
  count = 0
  swapped = True
  
  while swapped != False:
    swapped = False
    count += 1
    for i in range(0, n-1):
      if A[i] > A[i+1]:
        A[i], A[i+1] = A[i+1], A[i]
        swapped = True

  return count

if __name__ == "__main__":
  n = int(input())
  A = list(map(int, input().split(' ')))
  print(bubble_sort(A, n))