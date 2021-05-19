#include <iostream>

using namespace std;

void pointer_swap_6_22(int *&p1, int *&p2) {
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

int main_6_22() {
    int i = 10, j = 9;
    int *p1 = &i, *p2 = &j;
    cout << *p1 << "," << p1 << "  " << *p2 << "," << p2 << endl;
    pointer_swap_6_22(p1, p2);
    cout << *p1 << "," << p1 << "  " << *p2 << "," << p2 << endl;
    return 0;
}