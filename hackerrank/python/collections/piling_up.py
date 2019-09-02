def can_pile(arr):
    i = 0
    j = len(arr) - 1
    curr = float('inf')

    while i <= j:
        if arr[i] > curr or arr[j] > curr:
            return False
        if curr >= arr[i] >= arr[j]:
            curr = arr[i]
            i += 1
        else:
            curr = arr[j]
            j -= 1
    return True

T = int(input())

for _ in range(T):
    input()  # just ignore
    arr = [int(x) for x in input().split()]
    print('Yes' if can_pile(arr) else 'No')
