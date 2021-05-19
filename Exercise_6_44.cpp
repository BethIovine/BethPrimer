#include <iostream>
#include <vector>

using namespace std;
using iter = vector<int>::const_iterator;

inline bool is_shorter_6_44(const string &a, const string &b) {
    return a.size() < b.size();
}

int main_6_44() {
    string a = "aabc";
    string b = "aabcc";

    cout << boolalpha << is_shorter_6_44(a, b) << endl;

    return 0;
}