#include <iostream>
#include <list>

using namespace std;

int main_9_19() {
    list<string> l;
    string buf;
    while (cin >> buf && buf != "EOF") {
        l.push_back(buf);
    }

    for (auto c = l.cbegin(); c != l.cend(); ++c)
        cout << *c << endl;

    return 0;
}