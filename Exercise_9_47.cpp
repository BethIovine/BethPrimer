#include <iostream>
#include <vector>

using namespace std;

int main_47() {
    string numbers{"123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str = "ab2c3d7R4E6";

    cout << "find first number in string : ";
    size_t index = str.find_first_of(numbers, 0);
    if (index == str.npos) cout << "not exist" << endl;
    else cout << str[index] << endl;

    cout << "find first alphabet in string : ";
    index = str.find_first_of(alphabet, 0);
    if (index == str.npos) cout << "not exist" << endl;
    else cout << str[index] << endl;

    cout << "find first not alphabet in string : ";
    index = str.find_first_not_of(numbers, 0);
    if (index == str.npos) cout << "not exist" << endl;
    else cout << str[index] << endl;

    cout << "find first not alphabet in string : ";
    index = str.find_first_not_of(alphabet, 0);
    if (index == str.npos) cout << "not exist" << endl;
    else cout << str[index] << endl;

    return 0;
}