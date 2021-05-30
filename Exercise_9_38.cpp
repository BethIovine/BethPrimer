#include <iostream>
#include <vector>

using namespace std;

int main_9_38() {
    vector<int> data;
    int *p = nullptr;
    for (int i = 0; i < 2048; ++i) {
        data.push_back(i);
        if (p != &data[0]) {
            p = &data[0];
            cout << "vector grow when element size reach " << i;
            cout << ", after grow vector's capacity is " << data.capacity() << endl;
        }
    }

    return 0;
}