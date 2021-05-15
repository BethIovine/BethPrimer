#include <iostream>

using namespace std;

int main_4_28() {
    cout << "Print each build-in types size,unit is byte:" << endl;

    cout << "nullptr size:\t\t" << sizeof(nullptr) << endl;

    cout << "bool size:\t\t" << sizeof(bool) << endl;

    cout << "char size:\t\t" << sizeof(char) << endl;
    cout << "wchar_t size:\t\t" << sizeof(wchar_t) << endl;
    cout << "char16_t size:\t\t" << sizeof(char16_t) << endl;
    cout << "char32_t size:\t\t" << sizeof(char32_t) << endl;

    cout << "short size:\t\t" << sizeof(short) << endl;
    cout << "int size:\t\t" << sizeof(int) << endl;
    cout << "long size:\t\t" << sizeof(long) << endl;
    cout << "long long size:\t\t" << sizeof(long long) << endl;

    cout << "float size:\t\t" << sizeof(float) << endl;
    cout << "double size:\t\t" << sizeof(double) << endl;
    cout << "long double size:\t\t" << sizeof(long double) << endl;

    cout << "int8_t size:\t\t" << sizeof(int8_t) << endl;
    cout << "uint8_t size:\t\t" << sizeof(uint8_t) << endl;
    cout << "int16_t size:\t\t" << sizeof(int16_t) << endl;
    cout << "uint16_t size:\t\t" << sizeof(uint16_t) << endl;
    cout << "int32_t size:\t\t" << sizeof(int32_t) << endl;
    cout << "uint32_t size:\t\t" << sizeof(uint32_t) << endl;
    cout << "int64_t size:\t\t" << sizeof(int64_t) << endl;
    cout << "uint64_t size:\t\t" << sizeof(uint64_t) << endl;

    return 0;
}
