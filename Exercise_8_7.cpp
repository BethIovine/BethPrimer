#include <iostream>
#include <fstream>
#include <vector>
#include "Sales_data_ch7.h"

using namespace std;

void readTransIntoVector_8_7(const string &fileName, vector<Sales_data_ch7> &vec) {
    ifstream ifs(fileName);
    if (ifs) {
        Sales_data_ch7 trans;
        while (read(ifs, trans)) {
            vec.push_back(trans);
        }
    }
}

void writeTransIntoFile_8_7(const string &fileName, vector<Sales_data_ch7> &vec) {
    ofstream ofs(fileName);
    if (ofs) {
        for (auto &item:vec) print(ofs, item);
    }
}

int main_8_7() {
    vector<Sales_data_ch7> vec;
    string inputFileName = "../chapter8/Sales_item.txt";
    string outputFileName = "../chapter8/Sales_item_output.txt";

    readTransIntoVector_8_7(inputFileName, vec);
    writeTransIntoFile_8_7(outputFileName, vec);

    return 0;
}