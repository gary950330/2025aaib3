// week10-2b.cpp 學習計畫 Math 的第一題(用數學來解)
// LeetCode 1523. Count Odd Numbers in a Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2;
        if (low%2==1 || high%2==1) ans++;
        return ans;
    }
};
