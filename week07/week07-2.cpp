// week07-2.cpp LeetCode學習計畫 Simulation 第二題
// 657. Robot Return to Origin 模擬機器人走路
// 'U' up往上, 'D' down往下, 'L' left往左, 'R' right往右
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        //for (int i=0; i<moves.length(); i++) {
        //    char c = moves[i];
        for (char c : moves) {
            if (c=='U') {
                y++;
            } else if (c=='D') {
                y--;
            } else if (c=='L') {
                x--;
            } else if (c=='R') {
                x++;
            }
        } // 離開迴圈後
        if (x==0 && y==0) return true;
        else return false;
    }
};
