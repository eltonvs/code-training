from non_primes_generator import is_prime, manipulate_generator

# Test is_prime
cases_dict = {
    1: False,
    2: True,
    3: True,
    4: False,
    5: True,
    6: False,
    7: True,
    8: False,
    9: False,
    10: False,
    11: True,
    12: False,
    13: True,
    29: True,
    31: True,
    37: True,
    41: True,
    43: True,
    47: True,
    53: True,
    59: True,
    61: True,
    67: True,
    71: True,
    73: True,
    79: True,
    83: True,
    89: True,
    97: True,
    101: True,
    103: True,
    107: True,
    109: True,
    113: True,
    127: True,
    131: True,
}

for n, expected in cases_dict.items():
    assert(is_prime(n) == expected)


# Test manipulate_generator
first_100_non_primes = [
    1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30,
    32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 52, 54, 55,
    56, 57, 58, 60, 62, 63, 64, 65, 66, 68, 69, 70, 72, 74, 75, 76, 77, 78, 80,
    81, 82, 84, 85, 86, 87, 88, 90, 91, 92, 93, 94, 95, 96, 98, 99, 100, 102,
    104, 105, 106, 108, 110, 111, 112, 114, 115, 116, 117, 118, 119, 120, 121,
    122, 123, 124, 125, 126, 128, 129, 130, 132,
]

def positive_integers_generator():
    n = 1
    while True:
        x = yield n
        if x is not None:
            n = x
        else:
            n += 1

g = positive_integers_generator()
for i in range(100):
    n = next(g)
    assert(n == first_100_non_primes[i])
    manipulate_generator(g, n)
