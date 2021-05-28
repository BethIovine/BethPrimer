#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool identicalVector_9_15(const vector<int> &v1, const vector<int> &v2) {
    if (v1.size() != v2.size()) return false;

    for (auto c1 = v1.cbegin(), c2 = v2.cbegin(); c1 != v1.cend() && c2 != v2.cend(); ++c1, ++c2) {
        if (*c1 != *c2) return false;
    }

    return true;
}

int main_9_15() {
    vector<int> v1{1, 2, 3, 4, 5, 6, 7};
    vector<int> v2{1, 2, 3, 4, 5, 6, 7};
    vector<int> v3{1, 2, 3, 4, 5, 5, 7};
    vector<int> v4;

    cout << boolalpha << identicalVector_9_15(v1, v2) << endl;
    cout << boolalpha << identicalVector_9_15(v1, v3) << endl;
    cout << boolalpha << identicalVector_9_15(v1, v4) << endl;
    cout << boolalpha << identicalVector_9_15(v1, v1) << endl;

    return 0;
}