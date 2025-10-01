/// week04-1.cpp
/// 複習 C++ 伸縮自如的陣列 vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout << "沒有[初始化]a的長度是" << a.size() << endl;
    a.push_back(99);
    cout << "經過 .push_back() 後 a的長度變" << a.size() << endl;

    vector<int> b(3);
    cout << "b的長度是" << b.size() << endl;
    b.push_back(99);
    for(int i=0; i<b.size(); i++) cout << b[i] << ' ';
    cout << "經過 .push_back(99) 後b變長了" << endl;

    vector<int> c(3, 88);
    for(int i=0; i<c.size(); i++) cout << c[i] << ' ';
    cout << "初始化 (3, 88) 就會是 3 個 88" << endl;

    ///下一個作業
}
