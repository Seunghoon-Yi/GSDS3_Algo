import bisect
N = int(input())
arr = list(map(int, input().split()))
M = int(input())
test = list(map(int, input().split()))

arr.sort()
for i in range(M):
    if bisect.bisect_right(arr, test[i]) != bisect.bisect_left(arr, test[i]):
        print(1)
    else:
        print(0)