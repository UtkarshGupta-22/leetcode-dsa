class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1 = {}
        s2 = {}
        for x in s:
            s1[x] = s1.get(x,0)+1
        for y in t:
            s2[y] = s2.get(y,0)+1
        return s1 == s2
        
            