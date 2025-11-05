// week09-2.cpp 學習計畫 Matrix 第4題
// LeetCode 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 第1步,先找所有的0,而且記下它的位置
        int M = matrix.size(), N = matrix[0].size();
        vector<bool> markI(M), markJ(N);
        for(int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                if (matrix[i][j]==0) {
                    markI[i] = true;
                    markJ[j] = true;
                }
            }
        }
        // 第二步
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                if (markI[i]==true || markJ[j]==true) matrix[i][j] = 0;
            }
        }
    }
};
