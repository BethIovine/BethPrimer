#include <iostream>
#include "chapter1/Sales_item.h"

using namespace std;

int main_1_23() {
    cout << "Enter several same book:" << endl;
    Sales_item curItem, valItem;

    if (cin >> curItem) {
        int cnt = 1;
        while (cin >> valItem) {
            if (curItem.isbn() == valItem.isbn()) {
                curItem += valItem;
                ++cnt;
            } else {
                cout << "book " << curItem.isbn() << " occur " << cnt << " times." << endl;
                curItem = valItem;
                cnt = 1;
            }
        }
    } else {
        cerr << "No Data" << endl;
        return -1;
    }

    return 0;
}
