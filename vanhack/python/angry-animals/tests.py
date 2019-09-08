from angry_animals import angry_animals, generate_groups, filter_set

print(generate_groups((3, 4), 8))

# print(angry_animals(4, [1, 2], [3, 4]))
# print(angry_animals(8, [2, 3, 4, 3], [8, 5, 6, 4]))

print(list(filter_set(set([(1, 2), (1, 3), (1, 4), (2, 3), (2, 4)]))))
