#include <iostream>

using namespace std;

void reset_6_11(int &v)       // n is a parameter.
{
    v = 0;
}

int main_6_11() {
    int i = 10;
    reset_6_11(i);

    cout << i << endl;

    return 0;
}