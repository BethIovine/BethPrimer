#include <iostream>
#include <deque>

using namespace std;

int main_9_18() {
    deque<string> d;
    string buf;
    while (cin >> buf && buf != "EOF") {
        d.push_back(buf);
    }

    for (auto c = d.cbegin(); c != d.cend(); ++c)
        cout << *c << endl;

    return 0;
}