from math import sqrt


def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True


def manipulate_generator(generator, n):
    while is_prime(n + 1):
        n += 1
        next(generator)
