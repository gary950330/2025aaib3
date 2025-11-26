// week12-3.cpp 學習計畫 Math 第四題
// LeetCode 976. Largest Perimeter Trinagle
// 要用 nums 的棒子長度, 組合出三角形兩邊和第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // for (int i=nums.size()-1; i>=0; i--) {
            // 倒過來的迴圈
        //   cout << nums[i] << " ";
        //} // 先印出[大到小] 等一下,這三行會刪掉
        for (int i=nums.size()-1; i>=2; i--) {
            if (nums[i] < nums[i-1] + nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
            // 如果順利
        }

        return 0;
        }
};
