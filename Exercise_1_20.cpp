#include <iostream>
#include "chapter1/Sales_item.h"

using namespace std;

int main_1_20() {
    cout << "Enter book number and sold number and value:" << endl;
    for (static Sales_item item; cin >> item; cout << item << endl);

    return 0;
}
