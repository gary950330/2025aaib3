# week01-2.py Leetcode 學習計畫 python版
# LeetCode 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        # sadbutsad
        # sad i:0
        #  sad i:1
        # ....
        #       sad i:6
        for i in range(H-N+1):
            if haystack[i:i+N] == needle:
            # 把字串,從i開始,取到 i+N 結束 共 N 個字
                return i # 成功
        return -1 # 沒有成功
