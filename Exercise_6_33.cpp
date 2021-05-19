#include <iostream>
#include <vector>

using namespace std;
using iter = vector<int>::const_iterator;

void iterator_print_6_33(iter begin, iter end) {
    if (begin != end) {
        cout << *begin << endl;
        iterator_print_6_33(++begin, end);
    }
}

int main_6_33() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};

    iterator_print_6_33(a.cbegin(), a.cend());

    return 0;
}