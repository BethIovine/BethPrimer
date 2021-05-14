#include <iostream>
#include <string>

using namespace std;

int main_3_39() {
    string str1("c++ primer");
    string str2("c primer");
    if (str1 == str2) cout << "two string are equal" << endl;
    else cout << "two string are not equal" << endl;

    char *s1 = "c++ primer";
    char *s2 = "c primer";
    if (strcmp(s1, s2) == 0)cout << "two string are equal" << endl;
    else cout << "two string are not equal" << endl;

    return 0;
}
