/// week05-3.cpp �T�X�@�� Part1/Part2 Input/Output
/// Part3: stringstream �_�r
/// CPE �o������2�D UVA 483 Word Scramble ��r�ˤ�
#include <iostream>
#include <sstream> /// Part3: �Φr����_�r
#include <string>
#include <algorithm> /// Part4: �ϹL��, �n�Ψ� algorithm �t��k
using namespace std;
int main()
{
    string line; /// Part 1: Input
    while ( getline(cin, line) ) {
    /// Ū�J1�� �@��Ū,Ū��Ctrl-Z�~����
        stringstream ss(line); /// Part3: �Φr����_�r
        string word;
        ss >> word; /// Part 5: �ѨM�Ů���D, �����Y[ ���ΪŮ� ]
        reverse( word.begin(), word.end() );
        cout << word; /// Part 5: �ѨM�Ů���D, �����Y[ ���ΪŮ� ]
        while( ss >> word ){ /// Part3: �Φr����_�r
           reverse( word.begin(), word.end() ); /// Part 4: �ϹL��
           cout << " " << word;
        }
        cout << endl; /// ���� Part 2: Output
        ///cout << line << endl; /// ���H�K�L�X��
    }
}
