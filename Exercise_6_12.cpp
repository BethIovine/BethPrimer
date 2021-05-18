#include <iostream>

using namespace std;

void reference_swap_6_12(int &v1, int &v2)       // n is a parameter.
{
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

int main_6_12() {
    int i = 1, j = 5;
    reference_swap_6_12(i, j);

    cout << i << "  " << j << endl;

    return 0;
}