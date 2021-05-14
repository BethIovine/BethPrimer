#include <iostream>
#include <string>

using namespace std;

int main_3_5() {
    string largeStr;

    cout << "Please enter strings constantly:" << endl;
    for (string str; getline(cin, str) && str != "EOF"; largeStr += str);
    cout << "Concatenated result:" << largeStr << endl;

    return 0;
}