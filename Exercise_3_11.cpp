#include <iostream>
#include <string>

using namespace std;

int main_3_11() {
    const string s = "Keep out!";
    for (auto &c:s) {
//        c = 'a'; 
        cout << c << endl;
    }

}