#include <iostream>
#include <vector>
#include <string>


using namespace std;

template<typename T>
void checkAndPrint(vector<T> v) {
    cout << "vector's size is: " << v.size() << endl;

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << "  ";
    }
    if (v.size() == 0) cout << "No elements";
    cout << endl;
}

int main_3_21() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    checkAndPrint(v1);
    checkAndPrint(v2);
    checkAndPrint(v3);
    checkAndPrint(v4);
    checkAndPrint(v5);
    checkAndPrint(v6);
    checkAndPrint(v7);

    return 0;
}

