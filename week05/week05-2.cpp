/// week05-2.cpp 搞懂 stringstream
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string line;
    getline( cin, line ); /// 一次讀入一整行
    cout << line << endl;

    stringstream ss(line);
    string word;
    while( ss >> word ){
        cout << "ss讀到1個字: " << word << endl;
    }
}
