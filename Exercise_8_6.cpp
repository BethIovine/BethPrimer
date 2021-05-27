#include <iostream>
#include <fstream>
#include <vector>
#include "Sales_data_ch7.h"

using namespace std;

void readTransIntoVector_8_6(const string &fileName, vector<Sales_data_ch7> &vec) {
    ifstream ifs(fileName);
    if (ifs) {
        Sales_data_ch7 trans;
        while (read(ifs, trans)) {
            vec.push_back(trans);
        }
    }
}

int main_8_6() {
    vector<Sales_data_ch7> vec;
    string fileName = "../chapter8/Sales_item.txt";

    readTransIntoVector_8_6(fileName, vec);
    for (auto &t:vec) print(cout, t);

    return 0;
}