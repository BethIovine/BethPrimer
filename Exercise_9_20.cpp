#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main_9_20() {
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> de1;
    deque<int> de2;

    int index = 0;
    // & priority less than ==
    for (auto i:l) {
        if ((index & 1) == 0) de1.push_back(i);
        else de2.push_back(i);
    }

    for (auto c = de1.cbegin(); c != de1.cend(); ++c)
        cout << *c << endl;
    for (auto c = de2.cbegin(); c != de2.cend(); ++c)
        cout << *c << endl;

    return 0;
}