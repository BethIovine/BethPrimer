#include <iostream>
#include <sstream>

using namespace std;

istream &func_8_9(istream &is) {
    string buf;
    while (is >> buf) {
        cout << buf << endl;
    }
    is.clear();
    return is;
}

int main_8_9() {
    istringstream iss("hello world");
    func_8_9(iss);
    return 0;
}