#include <iostream>
#include <string>

using namespace std;

int main_3_40() {
    char str1[] = "c++ primer";
    char str2[] = "is a good book";

    const size_t newSize = strlen(str1) + strlen(" ") + strlen(str2);
    char str[newSize];
    strcpy(str, str1);
    strcat(str, " ");
    strcat(str, str2);
    cout << str << endl;

    return 0;
}
