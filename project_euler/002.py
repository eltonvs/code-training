# Even Fibonacci Numbers

def gen_fib_numbers(max_n):
  yield 1
  yield 2

  f_1, f_2 = 1, 2
  while True:
    f_1, f_2 = f_2, f_1 + f_2
    if f_2 >= max_n:
      break
    yield f_2

def even_fib_sum(n):
  return sum(x for x in gen_fib_numbers(n) if x % 2 == 0)

# >>> even_fib_sum(4_000_000)
# 4613732
