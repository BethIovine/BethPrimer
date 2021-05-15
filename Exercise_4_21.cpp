#include <iostream>
#include <vector>

using namespace std;

int main_4_21() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vec(begin(arr), end(arr));

    for (auto &num:vec) {
        if (num & 1 == 1) num *= 2;
    }

    for (int i = 0; i < vec.size(); ++i) cout << vec[i] << "  ";
    cout << endl;

    return 0;
}
