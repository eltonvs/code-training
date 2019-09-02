input() # Just ignore first line

letters = input().split(' ')
k = int(input())

sz = len(letters)
c = letters.count('a')
c_ = sz - c

p = 1
for i in range(k):
    p = p * max(c_ - i, 0)/(sz - i)

print(1 - p)
