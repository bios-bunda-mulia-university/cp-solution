def search(arr, low, high, find):
  if low <= high:
    mid = (low + high) // 2
    if arr[mid] == find:
      return mid
    elif arr[mid] < find:
      return search(arr, mid+1, high, find)
    else:
      return search(arr, low, mid-1, find)
  else:
    return -1

if __name__ == "__main__":
  n, qs = list(map(int, input().split(' ')))
  arr = sorted(list(map(int, input().split(' '))))
  for i in range(qs):
    q = int(input())
    if search(arr, 0, n-1, q) == -1:
      print("NO")
    else:
      print("YES")