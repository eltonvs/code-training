def miniMaxSum(arr):
    # Complete this function
    arr.sort()
    print sum(arr[:4]), sum(arr[-4:])

if __name__ == "__main__":
    arr = map(int, raw_input().strip().split(' '))
    miniMaxSum(arr)
