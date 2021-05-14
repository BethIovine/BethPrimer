#include <iostream>
#include <vector>

using namespace std;

int main_3_32() {
    int arr1[10];
    for (int i = 0; i < 10; ++i) arr1[i] = i;

    int arr2[10];
    for (int i = 0; i < 10; ++i) arr2[i] = arr1[i];

    vector<int> vec1(10);
    for (int i = 0; i < 10; ++i) vec1[i] = i;

    vector<int> vec2(vec1);

    return 0;
}
