#include <iostream>
#include <vector>

using namespace std;

void replace_9_43(string &s, const string &oldVal, const string &newVal) {
    for (auto cur = s.begin(); cur <= (s.end() - oldVal.size());) {
        if (oldVal == string(cur, cur + oldVal.size())) {
            cur = s.erase(cur, cur + oldVal.size());
            cur = s.insert(cur, newVal.begin(), newVal.end());
            cur += newVal.size();
        } else {
            ++cur;
        }
    }
}

int main_9_43() {
    string s{"To drive straight thru is a foolish, tho courageous act."};

    replace_9_43(s, "tho", "though");
    replace_9_43(s, "thru", "through");
    cout << s << endl;

    return 0;
}