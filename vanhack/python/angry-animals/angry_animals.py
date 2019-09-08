def angry_animals(n, a, b):
    enemies_dict = {}
    for pair in zip(a, b):
        x, y = min(pair), max(pair)
        enemies_dict.setdefault(y, set()).add(x)

    ini, end = 0, 0
    groups_count = 0
    for i in range(1, n + 1):
        if end <= ini:
            groups_count += 1
            end += 1
            continue
        i_enemies = enemies_dict.get(i, set())
        next_enemy = lambda: max(i_enemies)
        while end > ini and i_enemies and ini + 1 <= next_enemy() and end >= next_enemy():
            if ini + 1 >= next_enemy():
                i_enemies.remove(next_enemy())
            # Ignore first animal from queue
            ini += 1
            groups_count += end - ini
        # Grab the next animal
        end += 1
        groups_count += 1

    animals_partition_size = end - ini
    # Possibilities for remaining elements
    groups_count += animals_partition_size * (animals_partition_size - 1) // 2

    return groups_count
