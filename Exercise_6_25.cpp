#include <iostream>

using namespace std;

int main_6_25(int argc, char **argv) {
    string str;
    cout << "argv[0]: " + string(argv[0]) << endl;
    for (int i = 1; i < argc; ++i) {
        str += string(argv[i]) + " ";
    }

    cout << str << endl;

    return 0;
}