#include <iostream>

using namespace std;

int main_5_20() {
    string str, pre;
    cout << "Please enter a sequence of words." << endl;

    for (; cin >> str && str != "EOF"; pre = str) {
        if (str == pre) break;
    }

    cout << (str == pre ? "repeated word is " + str : "No word was repeated") << endl;

    return 0;
}