#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main_3_42() {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums[vec.size()];

    for (int i = 0; i < vec.size(); ++i) nums[i] = vec[i];
    for (int i = 0; i < vec.size(); ++i) cout << nums[i] << "  ";
    cout << endl;

    return 0;
}
