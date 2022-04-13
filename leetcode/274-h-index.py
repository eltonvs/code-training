class Solution:
    def hIndex(self, citations: List[int]) -> int:
        sorted_citations = sorted(citations)
        h_index = 1 if sorted_citations[0] else 0
        for i in range(1, min(len(citations), sorted_citations[-1]) + 1):
            idx = len(citations) - i
            if sorted_citations[idx] >= i and (idx - 1 < 0 or sorted_citations[idx - 1] <= i):
                h_index = i
        return h_index
