# week01-2.py Leetcode �ǲ߭p�e python��
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
            # ��r��,�qi�}�l,���� i+N ���� �@ N �Ӧr
                return i # ���\
        return -1 # �S�����\
