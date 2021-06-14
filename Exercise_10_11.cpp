#include <iostream>
#include <vector>
#include <numeric>
#include <list>

using namespace std;

inline bool isShorter_10_11(const string &lhs, const string &rhs) {
    return lhs.size() < rhs.size();
}

void eliminate_dup_10_11(vector<string> &strs) {
    stable_sort(strs.begin(), strs.end(), isShorter_10_11);

    auto new_end = unique(strs.begin(), strs.end());
    strs.erase(new_end, strs.end());
}

int main_10_11() {
    vector<string> strs{"1234", "1234", "1234", "Hi", "alan", "wang"};

    eliminate_dup_10_11(strs);

    for (string str:strs) cout << str << endl;

    return 0;
}