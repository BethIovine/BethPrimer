#include <iostream>

using namespace std;

size_t count_add_6_6(int n)       // n is a parameter.
{
    static size_t ctr = 0;// ctr is a static variable.
    cout << "ctr == " << ctr << endl;
    ctr += n;
    return ctr;
}

int main_6_6() {
    for (size_t i = 0; i != 10; ++i)  // i is a local variable.
        cout << count_add_6_6(i) << endl;

    return 0;
}