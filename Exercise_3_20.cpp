#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main_3_20() {
    vector<int> nums;

    cout << "Please enter a lot of num" << endl;
    for (int num; cin >> num; nums.push_back(num));
    for (int i = 0, j = nums.size() - 1; i < j; ++i, --j) cout << nums[i] + nums[j] << endl;

    return 0;

}