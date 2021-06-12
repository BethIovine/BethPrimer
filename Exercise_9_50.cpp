#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

auto sum_of_int_9_50(const vector<string> &v) {
    int sum = 0;

    for (const string &str:v) {
        int val = stoi(str);
        sum += val;
    }

    return sum;
}

auto sum_of_float_9_50(const vector<string> &v) {
    float sum = 0.0;

    for (const string &str:v) {
        float val = stof(str);
        sum += val;
    }

    return sum;
}

int main_9_50() {
    vector<string> v{"1", "2", "3.3", "4.1"};
    cout << sum_of_int_9_50(v) << endl;
    cout << sum_of_float_9_50(v) << endl;

    return 0;
}