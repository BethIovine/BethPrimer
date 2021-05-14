#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main_3_23() {
    vector<int> nums;

    for (int i = 0; i < 10; ++i) nums.push_back(i);
    for (auto it = nums.begin(); it != nums.end(); ++it) *it = *it * 2;
    for (auto it = nums.begin(); it != nums.end(); ++it) cout << *it << endl;

    return 0;
}

