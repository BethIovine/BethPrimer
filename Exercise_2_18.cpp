#include <iostream>

using namespace std;

int main_2_18() {
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;

    cout << "a value is " << a << " and b value is " << b << endl;
    cout << "pa point to value " << *pa << " and pb point to value " << *pb << endl;

    pa = &b;
    cout << "a value is " << a << " and b value is " << b << endl;
    cout << "pa point to value " << *pa << " and pb point to value " << *pb << endl;

    *pb = 25;
    cout << "a value is " << a << " and b value is " << b << endl;
    cout << "pa point to value " << *pa << " and pb point to value " << *pb << endl;

    return 0;
}
