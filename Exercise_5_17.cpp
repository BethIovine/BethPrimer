#include <iostream>
#include <vector>

using namespace std;

bool isPrefix(vector<int> &v1, vector<int> &v2) {
    int index = min(v1.size(), v2.size());

    for (int i = 0; i < index; ++i) {
        if (v1[i] != v2[i]) return false;
    }

    return true;
}

int main_5_17() {
    vector<int> v1{0, 1, 1, 2};
    vector<int> v2{0, 1, 2, 2, 3, 5, 8};

    cout << (isPrefix(v1, v2) ? "is a prefix" : "not a prefix") << endl;

    return 0;
}