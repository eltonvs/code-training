def steps(number: int) -> int:
    if number < 2:
        return number

    bin_str = '{0:b}'.format(number)
    size = number.bit_length()

    s = 0
    ans = 0
    for i, c in enumerate(bin_str):
        c_pos = size - i - 1
        c_num = 2 ** c_pos
        if i == 0:
            ans += c_num
            continue
        cm = '0' if s % 2 == 0 else '1'
        ans += c_num if c == cm else 0
        s += int(c)
    return ans
