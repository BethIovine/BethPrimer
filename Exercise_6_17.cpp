#include <iostream>

using namespace std;

bool contain_capital_6_17(const string &str)       // n is a parameter.
{
    for (char c:str) if (isupper(c)) return true;
    return false;
}

void change_to_lowCase_6_17(string &str) {
    for (char &c:str) if (isupper(c)) c = tolower(c);
}

int main_6_17() {
    string str = "aASdsdfaSSA";

    cout << boolalpha << contain_capital_6_17(str) << endl;
    change_to_lowCase_6_17(str);
    cout << str << endl;

    return 0;
}