// week03-4a.cpp �Ĥ@�ؼg�k���\!
// LeetCode �ǲ߭p�e��6�D 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // �������뵪��, �b��^�h nums
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        }

        for(int i=0; i<nums.size(); i++){
            if(i<ans.size()) nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
