#include <iostream>
#include <vector>

using namespace std;

int main_10_1() {
    vector<int> ints{1, 22, 324, 55, 22, 14, 5, 22};
    vector<string> strs{"aa", "bbba", "aa", "algo"};

    cout << count(ints.begin(), ints.end(), 22) << endl;
    cout << count(strs.begin(), strs.end(), "aa") << endl;

    return 0;
}