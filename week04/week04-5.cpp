// week04-5.cpp
// LeetCode �ǲ߭p�e�ĤC�D 66. Plus One
// �q�k������,�˹L�Ӫ��j��
// 1,9,9
//     0 �]�����i��,�ҥH�����٬O+1
//   0   �]�����i��,�ҥH�����٬O+1
// 2     �S���i��,�������״N���F
// 1,2,3
//     4 �S���i��,�������״N���F
// 9,9,9
//1,0,0, 0 �p�G�@���i��,�S����쵪��,�٭n�b�̫e����1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        for(int i=N-1; i>=0; i--) {
            if( digits[i] == 9 ) digits[i] = 0;
            else{
                digits[i]++;
                return digits;
            }
        }
        // ���S��쵪��, �]�N�O9,9,9 �@���i��, �G�F,�٭n�b�̫e����1
        digits.insert(digits.begin(),1);
        return digits;
    }
};
