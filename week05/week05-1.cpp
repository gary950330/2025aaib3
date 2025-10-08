// week05-1.cpp
// LeetCode 學習計畫 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        //ss >> word;
        //ss >> word;
        while( ss >> word ){
            // 裡面甚麼事都沒有做
        }
        cout << word;

        return word.length();
    }
};
