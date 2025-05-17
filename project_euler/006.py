# Sum Square Difference

def sum_square_difference(n):
  n_sum = 0
  n_square_sum = 0
  for i in range(n):
    n_sum += i + 1
    n_square_sum += (i + 1) ** 2
  n_sum_square = n_sum ** 2
  return n_sum_square - n_square_sum

# >>> sum_square_difference(100)
# 25164150
