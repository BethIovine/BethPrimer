#include <iostream>
#include <vector>

using namespace std;

int main_5_11() {
    char c;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0;

    while (cin >> noskipws >> c) {
        if (c == 'a' || c == 'A') ++aCnt;
        else if (c == 'e' || c == 'E') ++eCnt;
        else if (c == 'i' || c == 'I') ++iCnt;
        else if (c == 'o' || c == 'O') ++oCnt;
        else if (c == 'u' || c == 'U') ++uCnt;
        else if (c == ' ') ++spaceCnt;
        else if (c == '\t') ++tabCnt;
        else if (c == '\n') ++newLineCnt;
    }

    cout << "Number of vowel a: \t" << aCnt << endl;
    cout << "Number of vowel e: \t" << eCnt << endl;
    cout << "Number of vowel i: \t" << iCnt << endl;
    cout << "Number of vowel o: \t" << oCnt << endl;
    cout << "Number of vowel u: \t" << uCnt << endl;
    cout << "Number of white space:\t" << spaceCnt << endl;
    cout << "Number of tab:\t" << tabCnt << endl;
    cout << "Number of new lines:\t" << newLineCnt << endl;

    return 0;
}