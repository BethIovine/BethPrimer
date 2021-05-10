#include <iostream>

using namespace std;

int main_1_8() {
    //legal
    cout << "/*";

    //legal
    cout << "*/";

    //illegal
    //cout<</*"*/"*/;
    //change to legal format
    cout <</*"*/"*/";

    //legal
    cout <</* "*/" /*"/*" */;
    return 0;
}
