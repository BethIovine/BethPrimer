#include <iostream>

using namespace std;

istream &func_8_1(istream &is) {
    string buf;

    while (is >> buf && buf != "EOF") {
        cout << buf << endl;
    }
    is.clear();

    return is;
}

int main_8_2() {
    istream &is = func_8_1(cin);
    cout << "istream state:" << is.rdstate() << endl;

    return 0;
}