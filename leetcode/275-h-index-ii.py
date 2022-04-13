class Solution:
    def hIndex(self, citations: List[int]) -> int:
        h_index = 1 if citations[0] else 0
        for i in range(1, min(len(citations), citations[-1]) + 1):
            idx = len(citations) - i
            if citations[idx] >= i and (idx - 1 < 0 or citations[idx - 1] <= i):
                h_index = i
        return h_index
