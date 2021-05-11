#include <iostream>
#include "chapter1/Sales_item.h"

using namespace std;

int main_1_21() {
    cout << "Enter book number and sold number and value:" << endl;
    Sales_item item1, item2;

    cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) cout << item1 + item2 << endl;
    else cout << "Different ISBN" << endl;

    return 0;
}
