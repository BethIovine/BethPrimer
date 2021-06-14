#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main_10_3() {
    vector<int> ints{1, 22, 324, 55, 22, 14, 5, 22};
    vector<double> dous{1.23, 2.56, 3.74, 1};

    cout << accumulate(ints.cbegin(), ints.cend(), 0) << endl;
    cout << accumulate(dous.cbegin(), dous.cend(), 0.0) << endl;

    return 0;
}