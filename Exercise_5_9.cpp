#include <iostream>
#include <vector>

using namespace std;

int main_5_9() {
    char c;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

    while (cin >> c) {
        if (c == 'a') ++aCnt;
        else if (c == 'e') ++eCnt;
        else if (c == 'i') ++iCnt;
        else if (c == 'o') ++oCnt;
        else if (c == 'u') ++uCnt;
    }

    cout << "Number of vowel a: \t" << aCnt << endl;
    cout << "Number of vowel e: \t" << eCnt << endl;
    cout << "Number of vowel i: \t" << iCnt << endl;
    cout << "Number of vowel o: \t" << oCnt << endl;
    cout << "Number of vowel u: \t" << uCnt << endl;

    return 0;
}