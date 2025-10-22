// week07-3.cpp LeetCode �ǲ߭p�e Simulation �Ĥ@�D
// 682. Baseball Game �p���I��
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: �n����,���}�C a �̭�
        for (string op : operations ) {
            //cout << "�{�bŪ��F: " << op << "\n"; // Part02: �ݥ��O��, ���@�U�R��
            // Part03: �@�� if �PŪ�n������
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
        return ans; //return 0; // ���H�K return ���@�U�A�g[�u������]
    }
};
