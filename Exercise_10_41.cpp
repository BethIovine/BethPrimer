#include <iostream>
#include <list>

using namespace std;

void eliminate_dup_10_41(list<string> &l) {
    l.sort();
    l.unique();
}

int main_10_41() {
    list<string> l = {"aa", "aa", "aa", "aa", "aasss", "aa"};

    eliminate_dup_10_41(l);
    for (const auto &str:l) cout << str << "  ";
    cout << endl;

    return 0;
}