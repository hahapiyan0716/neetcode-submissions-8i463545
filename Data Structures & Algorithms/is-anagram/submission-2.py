class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        count1 = {}
        count2 = {}
        for c in s:
            count1[c] = count1.get(c, 0) + 1
        for c in t:
            count2[c] = count2.get(c, 0) + 1
        if count1 == count2:
            return True
        return False
