#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main_8_10() {
    string fileName = "../chapter8/Sales_item.txt";
    ifstream ifs(fileName);

    if (!ifs) {
        cerr << "No data" << endl;
        return -1;
    }

    vector<string> lineVec;
    string line;
    while (ifs >> line) {
        lineVec.push_back(line);
    }

    for (auto &s:lineVec) {
        istringstream iss(s);
        string word;
        while (iss >> word) {
            cout << word << endl;
        }
    }

    return 0;
}