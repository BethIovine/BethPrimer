#include <iostream>
#include<vector>


using namespace std;

int main_3_14() {
    vector<int> nums;

    cout << "Please enter a lot of numbers:" << endl;
    for (int i = 0; cin >> i; nums.push_back(i));
    for (int n:nums) cout << n << endl;
    cout << nums.size() << endl;

    return 0;
}