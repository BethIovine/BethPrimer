#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main_3_41() {
    int a[10];
    for (int i = 0; i < 10; ++i) a[i] = 10 * i;

    vector<int> nums(begin(a), end(a));
    for (int i = 0; i < nums.size(); ++i) cout << nums[i] << "  ";
    cout << endl;

    return 0;
}
