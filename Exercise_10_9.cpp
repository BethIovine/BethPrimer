#include <iostream>
#include <vector>
#include <numeric>
#include <list>

using namespace std;

void eliminate_dup_10_9(vector<string> &strs) {
    sort(strs.begin(), strs.end());

    auto new_end = unique(strs.begin(), strs.end());
    strs.erase(new_end, strs.end());
}

int main_10_9() {
    vector<string> strs{"1", "2", "3", "5", "1", "2", "1", "7", "8"};

    eliminate_dup_10_9(strs);

    for (string str:strs) cout << str << endl;

    return 0;
}