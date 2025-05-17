# Special Pythagorean Triplet

def find_pythagorean_triplet_for_sum(triplet_sum):
  for a in range(1, triplet_sum // 3):
    for b in range(a + 1, triplet_sum // 2):
      c = triplet_sum - a - b
      if a**2 + b**2 == c**2:
        return a, b, c
  return None

def product_of_pythagorean_triplet_for_sum(sum):
  triplet = find_pythagorean_triplet_for_sum(sum)
  if triplet:
    return triplet[0] * triplet[1] * triplet[2]
  return None

# >>> product_of_pythagorean_triplet_for_sum(1000)
# 31875000
