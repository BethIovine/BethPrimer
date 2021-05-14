#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main_3_22() {
    vector<string> text;
    cout << "Please enter a text:" << endl;

    for (string str; getline(cin, str) && str != "EOF"; text.push_back(str));
    for (string &str:text) for (auto &c:str) if (isalpha(c)) c = toupper(c);
    for (string str:text) cout << str << endl;

    return 0;
}

