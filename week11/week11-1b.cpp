// week11-1b.cpp 挑戰題 二合一,聰明的方法
// LeetCode 2154. Keep Multiplying Found Values by Two
// 每次乘兩倍
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for (int num : nums) numsSet.insert(num);
        // 請問 original 有沒有在 numsSet 裡? 有的話, 繼續一直做
        while ( numsSet.find(original) != numsSet.end() ) {
            original = original * 2;
        }
        return original;
    }
};
