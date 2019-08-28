def fibonacciModified(t1, t2, n):
    fs = [t1, t2]
    i = 0
    while len(fs) < n:
        fs.append(fs[i] + fs[i + 1]**2)
        i += 1
    return fs[n - 1]

if __name__ == "__main__":
    t1, t2, n = input().strip().split(' ')
    t1, t2, n = [int(t1), int(t2), int(n)]
    result = fibonacciModified(t1, t2, n)
    print(result)
