input() # just ignore first line

arr = [int(x) for x in input().split(' ')]

a = set(int(x) for x in input().split(' '))
b = set(int(x) for x in input().split(' '))

ans = sum([1 if x in a else -1 if x in b else 0 for x in arr])
print(ans)
