#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool identical_9_16(const list<int> &l1, const vector<int> &v2) {
    if (l1.size() != v2.size()) return false;
    auto c1 = l1.cbegin();
    auto c2 = v2.cbegin();
    for (; c1 != l1.cend() && c2 != v2.cend(); ++c1, ++c2) {
        if (*c1 != *c2) return false;
    }

    return true;
}

int main_9_16() {
    vector<int> v1{1, 2, 3, 4, 5, 6, 7};
    list<int> l1{1, 2, 3, 4, 5, 6, 7};
    list<int> l2{1, 2, 3, 4, 5, 5, 7};

    cout << boolalpha << identical_9_16(l1, v1) << endl;
    cout << boolalpha << identical_9_16(l2, v1) << endl;
    cout << boolalpha << (vector<int>(l1.begin(), l1.end()) == v1) << endl;
    cout << boolalpha << (vector<int>(l2.begin(), l2.end()) == v1) << endl;

    return 0;
}