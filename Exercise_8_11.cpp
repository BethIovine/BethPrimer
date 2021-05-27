#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main_8_11() {
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
    istringstream iss;
    for (auto &s:lineVec) {
        iss.str(s);
        string word;
        while (iss >> word) {
            cout << word << endl;
        }
        iss.clear();
    }

    return 0;
}