#include <iostream>
#include <string>

using namespace std;

int main_3_8() {
    string str1, str2;

    cout << "Please enter a string:" << endl;
    getline(cin, str1);
    str2 = str1;

    for (auto &c:str1) c = 'x';

    decltype(str2.size()) i = 0;
    while (i < str2.size()) str2[i++] = 'y';

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}