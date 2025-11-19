// week11-3.cpp 學習計畫 Math 倒數第三題 2進位加法 1萬位
// LeetCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() -1, j = b.length() - 1 ;
        vector<int> ans;
        int carry = 0;
        while ( i>=0 || j>=0 ) {
            int now = carry;
            if (i>=0) {
                now += a[i] - '0';
                i--; // 加完了, 往左一位
            }
            if (j>=0) {
                now += b[j] - '0';
                j--; // 往左一位
            }
            ans.push_back( now % 2 );
            carry = now / 2; // 新的進位部分
        }
        if (carry > 0) ans.push_back(carry);
        string strAns = "";
        for (int i=ans.size()-1; i>=0; i--) {
            strAns = strAns + (char)(ans[i]+'0');
        }
        return strAns;
    }
};
