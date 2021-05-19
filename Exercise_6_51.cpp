#include <iostream>
#include <vector>

using namespace std;

void f_6_51() {
    cout << "Invoke f()" << endl;
}

void f_6_51(int) {
    cout << "Invoke f(int)" << endl;
}

void f_6_51(int, int) {
    cout << "Invoke f(int,int)" << endl;
}

void f_6_51(double) {
    cout << "Invoke f(double)" << endl;
}

void f_6_51(int, double) {
    cout << "Invoke f(int,double)" << endl;
}

void f_6_51(double, double) {
    cout << "Invoke f(double,double)" << endl;
}

int main_6_51() {
//    f(2.56, 42); // error: 'f' is ambiguous.
    f_6_51(42);
    f_6_51(42, 0.0);
    f_6_51(2.56, 3.14);

    return 0;
}