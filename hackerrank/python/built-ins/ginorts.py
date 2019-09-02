def sort_key(c):
    return (
        c.isdigit() - c.islower(),
        c in '02468',
        c
    )


s = input()
print(''.join(sorted(s, key=sort_key)))
