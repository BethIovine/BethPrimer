#include <iostream>

using namespace std;


int main_2_38() {
    int a = 10, c = 20, &b = c;
    auto n1 = a;
    auto n2 = b;
    decltype(a) m1 = a;
    decltype(b) m2 = b;
    cout << "n1 = " << n1 << ",  n2 = " << n2 << " ,  m1 = " << m1 << " , m2 =  " << m2 << endl;

    a = 15;
    c = 25;

    cout << "n1 = " << n1 << ",  n2 = " << n2 << " ,  m1 = " << m1 << " , m2 =  " << m2 << endl;


    return 0;
}
