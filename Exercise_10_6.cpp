#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main_10_6() {
    vector<int> ints{1, 22, 324, 55, 22, 14, 5, 22};

    fill_n(ints.begin(), ints.size(), 0);

    for (int i:ints) cout << i << endl;

    return 0;
}