#include <iostream>
#include <vector>

using namespace std;

int main_10_20() {
    vector<string> strs{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    cout << count_if(strs.cbegin(), strs.cend(), [](const string &str) {
        return str.size() >= 4;
    }) << endl;

    return 0;
}