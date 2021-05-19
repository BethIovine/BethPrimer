#include <iostream>
#include <vector>

using namespace std;
using iter = vector<int>::const_iterator;

void vecPrint_6_47(vector<int> &vec) {
#ifndef NDEBUG
    cout << "vector size : " << vec.size() << endl;
#endif
    if (!vec.empty()) {
        auto tmp = vec.back();
        vec.pop_back();
        vecPrint_6_47(vec);
        cout << tmp << " ";
    }
}

int main_6_47() {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7};

    vecPrint_6_47(vec);
    cout << endl;

    return 0;
}