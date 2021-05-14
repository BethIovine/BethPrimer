#include <iostream>
#include <vector>

using namespace std;

bool arrayCompare(int *arr1s, int *arr1e, int *arr2s, int *arr2e) {
    //compare size
    if ((arr1e - arr1s) != (arr2e - arr2s)) return false;
    for (int *i = arr1s, *j = arr2s; i != arr1e && j != arr2e; ++i, ++j) {
        if (*i != *j) return false;
    }

    return true;
}

int main_3_36() {
    int arr1[3] = {0, 1, 2};
    int arr2[3] = {0, 2, 4};

    if (arrayCompare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
        cout << "The two arrays are equal." << endl;
    else
        cout << "The two arrays are not equal." << endl;

    vector<int> vec1 = {0, 1, 2};
    vector<int> vec2 = {0, 1, 2};

    if (vec1 == vec2)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;

    return 0;
}
