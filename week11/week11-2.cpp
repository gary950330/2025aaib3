// week11-2.cpp 學習計畫 Math 第二題
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;
        int M = salary[0], m = salary[0];
        for (int i = 0; i < salary.size(); i++) {
            total += salary[i];
            if (salary[i] > M) M = salary[i];
            if (salary[i] < m) m = salary[i];
        }
        return (total - M - m) / (salary.size() - 2);
    }
};
