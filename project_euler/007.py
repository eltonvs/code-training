# 10001st Prime

def nth_prime(n):
  all_primes = [2]
  current_number = 3
  while len(all_primes) < n:
    is_prime = True
    for x in all_primes:
      if x >= current_number ** 0.5 + 1:
        break
      elif current_number % x == 0:
        is_prime = False
        break
    if is_prime:
      all_primes.append(current_number)
    current_number += 1
  return all_primes[-1]

# >>> nth_prime(10001)
# 104743
