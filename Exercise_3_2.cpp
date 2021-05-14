#include <iostream>
#include <string>

using namespace std;

//For code like is >> s, input is separated by whitespaces while reading into string s.
//For code like getline(is, s) input is separated by newline \n while reading into string s. Other whitespaces are ignored.
//For code like getline(is, s, delim)input is separated by delim while reading into string s. All whitespaces are ignored.
int main_3_2() {
    cout << "Please enter a sentence:" << endl;

    for (string str; cin >> str; cout << str << endl);

    for (string str; getline(cin, str); cout << str << endl);

    return 0;
}