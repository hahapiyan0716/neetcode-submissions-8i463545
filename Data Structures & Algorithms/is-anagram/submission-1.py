class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        count1 = {}
        count2 = {}
        for c in s:
            if c not in count1:
                count1[c] = 1
            else:
                count1[c] += 1
        
        for c in t:
            if c not in count2:
                count2[c] = 1
            else:
                count2[c] += 1 

        if count1 == count2:
            return True
        else:
            return False