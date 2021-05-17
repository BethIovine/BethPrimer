#include <iostream>

using namespace std;

int main_5_21() {
    string str, pre;
    bool repeated = false;
    cout << "Please enter a sequence of words." << endl;

    for (; cin >> str && str != "EOF"; pre = str) {
        if (isupper(str[0]) && str == pre) {
            repeated = true;
            break;
        }
    }

    cout << (repeated ? "repeated word is " + str : "No word was repeated") << endl;

    return 0;
}