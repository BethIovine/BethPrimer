#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main_3_16() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "vector v1 size: " << v1.size() << endl;
    cout << "vector v2 size: " << v2.size() << endl;
    cout << "vector v3 size: " << v3.size() << endl;
    cout << "vector v4 size: " << v4.size() << endl;
    cout << "vector v5 size: " << v5.size() << endl;
    cout << "vector v6 size: " << v6.size() << endl;
    cout << "vector v7 size: " << v7.size() << endl;

    return 0;
}