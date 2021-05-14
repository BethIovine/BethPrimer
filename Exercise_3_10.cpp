#include <iostream>
#include <string>

using namespace std;

int main_3_10() {
    string s;
    cout << "Please enter a string:" << endl;

    getline(cin, s);
    for (auto c:s) {
        if (!ispunct(c)) cout << c;
        else cout << " ";
    }
    cout << endl;

    return 0;
}