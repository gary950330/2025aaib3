// week07-2.cpp LeetCode�ǲ߭p�e Simulation �ĤG�D
// 657. Robot Return to Origin ���������H����
// 'U' up���W, 'D' down���U, 'L' left����, 'R' right���k
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
        } // ���}�j���
        if (x==0 && y==0) return true;
        else return false;
    }
};
