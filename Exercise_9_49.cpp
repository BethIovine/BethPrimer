#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main_9_49() {
    string fileName = "../chapter8/strings.txt";
    ifstream ifs(fileName);
    if (!ifs) return -1;

    string longest;
    auto find_longest = [&longest](const string &str) {
        if (string::npos == str.find_first_not_of("aceimnorsuvwxz"))
            longest = longest.size() < str.size() ? str : longest;
    };

    for (string cur; ifs >> cur; find_longest(cur));
    cout << longest << endl;

    return 0;
}