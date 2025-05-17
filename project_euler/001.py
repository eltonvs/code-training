# Multiples of 3 or 5

def sum_of_multiples_3_or_5(n):
  sum_mult_3 = sum_mult_5 = 0
  for i in range(1, n // 3 + 1):
    mult_5 = 5 * i
    mult_3 = 3 * i
    if mult_5 < n:
      sum_mult_5 += mult_5
    if mult_3 < n and mult_3 % 5 > 0:
      sum_mult_3 += mult_3
  return sum_mult_3 + sum_mult_5

# >>> sum_of_multiples_3_or_5(1000)
# 233168
