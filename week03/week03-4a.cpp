// week03-4a.cpp 第一種寫法成功!
// LeetCode 學習計畫第6題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // 偷偷先塞答案, 在塞回去 nums
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        }

        for(int i=0; i<nums.size(); i++){
            if(i<ans.size()) nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
