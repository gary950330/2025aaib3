// week10-1.cpp 學習計畫 Matrix 第二題
// LeetCode 1572. Matrix Diagonal Sum
// 有兩條對角線 左上 右下 (i==j)
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int N = mat.size();
        for (int i=0; i<N; i++) {
           for (int j=0; j<N; j++) {
               if (i==j || i+j==N-1) ans += mat[i][j];
           }
        }
        return ans;
    }
};
