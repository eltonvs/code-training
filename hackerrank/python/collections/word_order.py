n = int(input())

words = {}
for i in range(n):
    word = input()
    if word in words:
        words[word] += 1
    else:
        words[word] = 1

print(len(words))
print(' '.join(str(x) for x in words.values()))
