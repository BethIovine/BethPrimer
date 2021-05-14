#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main_3_15() {
    vector<string> strs;

    cout << "Please enter a lot of strings:" << endl;
    for (string str = ""; getline(cin, str) && str != "EOF"; strs.push_back(str));
    for (string str:strs) cout << str << endl;
    cout << strs.size() << endl;

    return 0;
}