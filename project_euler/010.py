# Summation of Primes

def all_primes_up_to_n(n):
  primes = [True for i in range(n+1)]
  primes[0] = False
  primes[1] = False
  for i in range(2, n+1):
    if primes[i]:
      for j in range(i*i, n+1, i):
        primes[j] = False
  return primes

def prime_sum(n):
  primes = all_primes_up_to_n(n)
  return sum(x for x in range(n+1) if primes[x])

# >>> prime_sum(2_000_000)
# 142913828922
