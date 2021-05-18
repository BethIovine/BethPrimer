#include <iostream>

using namespace std;

size_t func_invoke_count_5_7()       // n is a parameter.
{
    static size_t cnt = 0;
    cnt += 1;
    return cnt;
}

int main_6_7() {
    for (size_t i = 0; i != 99; ++i)  // i is a local variable.
        cout << func_invoke_count_5_7() << endl;

    return 0;
}