text = input()

prev = text[0]
count = 1
ans = []
for c in text[1:]:
    if c == prev:
        count += 1
    else:
        ans.append(f'({count}, {prev})')
        prev = c
        count = 1
else:
    ans.append(f'({count}, {prev})')

print(' '.join(ans))
