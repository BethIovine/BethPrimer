#include <iostream>
#include <vector>

using namespace std;

int main_10_36() {
    vector<int> vec{1, 2, 3, 0, 4, 5, 6, 7, 0, 8};

    auto it = find(vec.crbegin(), vec.crend(), 0);
    cout << distance(it, vec.crend()) << endl;

    return 0;
}