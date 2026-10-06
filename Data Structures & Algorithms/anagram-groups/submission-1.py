class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        Map = {}
        for s in strs:
            key = "".join(sorted(s))
            if key not in Map:
                Map[key] = [s]
            else:
                Map[key].append(s)
        res = list(Map.values())
        return res