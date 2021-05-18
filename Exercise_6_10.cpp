#include <iostream>

using namespace std;

void pointer_swap_6_10(int *v1, int *v2)       // n is a parameter.
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

int main_6_10() {
    int i = 1, j = 5;
    pointer_swap_6_10(&i, &j);

    cout << i << "  " << j << endl;

    return 0;
}