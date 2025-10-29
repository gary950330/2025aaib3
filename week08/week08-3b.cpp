// week08-3b.cpp LeetCode 學習計畫 Simulation
// 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    // myPrint() 小幫手的程式刪掉
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // 有大括號,會給0
        int now = 1; // 1: 玩家A 第一個玩家 2: 玩家B 第二個玩家
        int winner = 0;
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now; //a[i]a[j] = 1; // 玩家A 第一個玩家
            // myPrint(a); // 把陣列印出來
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;
            if(now==1) now = 2;
            else now = 1;
        }
        if(winner==1) return "A"; // 有 winner 是 1
        else if(winner==2) return "B"; // 有 winner 是 2
        else if(moves.size()==9) return "Draw"; // 走完9步才是平手
        else return "Pending"; // 陷阱, 還沒下完, 要等 Pending
    }
};
