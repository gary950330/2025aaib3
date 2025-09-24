/// week03-1.cpp
/// C++ 陣列 vector<int>
#include <iostream> /// cin cout 要用的
#include <vector> /// 今天的主題 陣列 vector
using namespace std;
int main()
{
    cout << "請輸入 4 個數字: ";
    vector<int> a; /// 伸縮自如 的陣列

    int now;
    for(int i=0; i<4; i++){
        cin >> now;
        a.push_back(now);
    }

    for(int i=0; i<a.size(); i++) {
        cout << a[i] << ' ';
    }

    cout<< "現在程式碼裡, 又推入了 99 88 兩個數字, 結果呢?\n";

    a.push_back(99);
    a.push_back(88);
    for(int i=0; i<a.size(); i++) {
        cout << a[i] << ' ';
    }
}
