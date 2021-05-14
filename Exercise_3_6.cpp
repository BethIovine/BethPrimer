#include <iostream>
#include <string>

using namespace std;

int main_3_6() {
    string str;

    cout << "Please enter a string:" << endl;
    getline(cin, str);
    for (auto &c:str) c = 'x';
    cout << "After change all character of input to x : " << str << endl;

    return 0;
}