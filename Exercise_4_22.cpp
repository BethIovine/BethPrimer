#include <iostream>


using namespace std;

int main_4_22() {
    cout << "Please enter score and get grade(v1):" << endl;

    //version 1:
    for (unsigned score; cin >> score;) {


        string res = score > 90 ? "high pass" : score >= 75 ? "low pass" : score >= 60 ? "pass" : "fail";
        cout << res << endl;
    }

    //cin buffer clear
    //cin.sync() makes no effort
    if (cin.fail()) {
        cin.clear(); // clear fail state
        cin.ignore(INT_MAX, '\n'); // clear cin buffer content
    }

    cout << "Please enter score and get grade(v2):" << endl;

    //version 2:
    for (unsigned score; cin >> score;) {
        if (score > 90) cout << "high pass" << endl;
        else if (score >= 75) cout << "low pass" << endl;
        else if (score >= 60) cout << "pass" << endl;
        else cout << "fail" << endl;
    }

    if (cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
    }

    return 0;
}
