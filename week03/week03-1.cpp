/// week03-1.cpp
/// C++ �}�C vector<int>
#include <iostream> /// cin cout �n�Ϊ�
#include <vector> /// ���Ѫ��D�D �}�C vector
using namespace std;
int main()
{
    cout << "�п�J 4 �ӼƦr: ";
    vector<int> a; /// ���Y�ۦp ���}�C

    int now;
    for(int i=0; i<4; i++){
        cin >> now;
        a.push_back(now);
    }

    for(int i=0; i<a.size(); i++) {
        cout << a[i] << ' ';
    }

    cout<< "�{�b�{���X��, �S���J�F 99 88 ��ӼƦr, ���G�O?\n";

    a.push_back(99);
    a.push_back(88);
    for(int i=0; i<a.size(); i++) {
        cout << a[i] << ' ';
    }
}
