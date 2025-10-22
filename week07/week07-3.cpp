// week07-3.cpp LeetCode 學習計畫 Simulation 第一題
// 682. Baseball Game 計算點數
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: 要把資料,放到陣列 a 裡面
        for (string op : operations ) {
            //cout << "現在讀到了: " << op << "\n"; // Part02: 看它是誰, 等一下刪掉
            // Part03: 一堆 if 判讀要怎麼模擬
            if (op[0]=='C'){
                a.pop_back();
            } else if (op[0]=='D'){
                a.push_back( a.back() * 2 );
            } else if (op[0]=='+'){
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp + temp2);
            } else {
                a.push_back( stoi(op) ); // Part04: .push)_back()
            }
        }
        int ans = 0;
        for (int now : a){
            ans += now; //cout << now << " "; // Part02
        }
        return ans; //return 0; // 先隨便 return 等一下再寫[真的答案]
    }
};
