class Solution(object):
    symbol_map = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000,
    }

    def romanToInt(self, s: str) -> int:
        ans = 0
        for i, c in enumerate(s):
            val = self.symbol_map[c]
            if i == len(s) - 1:
                ans += val
            else:
                ans += val * (-1 if val < self.symbol_map[s[i + 1]] else 1)
        return ans
