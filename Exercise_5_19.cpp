#include <iostream>

using namespace std;

int main_5_19() {
    string cmd;

    do {
        string str1, str2;
        cout << "Please enter two strings:" << endl;
        cin >> str1 >> str2;
        cout << "first string " << (str1 < str2 ? "less than" : str1 == str2 ? "equal to" : "bigger than")
             << " second string." << endl;
        cout << "more? type yes to continue,type q to quit" << endl;
        cin >> cmd;
    } while (!cmd.empty() && cmd != "q" && cmd != "quit");

    return 0;
}