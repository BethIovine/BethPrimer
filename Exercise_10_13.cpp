#include <iostream>
#include <vector>

using namespace std;

bool isLargerThanFive_10_13(string str) {
    return str.size() >= 5;
}

int main_10_13() {
    vector<string> strs{"12345", "123", "12", "123456", "1289", "11"};

    auto it = partition(strs.begin(), strs.end(), isLargerThanFive_10_13);
    cout << *it << endl;
    for (auto &s:strs) cout << s << "  ";
    cout << endl;

    return 0;
}