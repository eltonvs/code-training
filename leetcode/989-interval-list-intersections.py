class Solution:
    def intervalIntersection(self, firstList: List[List[int]], secondList: List[List[int]]) -> List[List[int]]:
        idx1 = 0
        idx2 = 0
        ans = []
        while idx1 < len(firstList) and idx2 < len(secondList):
            (s1, e1) = firstList[idx1]
            (s2, e2) = secondList[idx2]

            if s1 > e2:
                idx2 += 1
                continue

            if s2 > e1:
                idx1 += 1
                continue

            ans.append([max(s1, s2), min(e1, e2)])

            if e1 == e2:
                idx1 += 1
                idx2 += 1
            elif e1 < e2:
                idx1 += 1
            else:
                idx2 += 1
        return ans
