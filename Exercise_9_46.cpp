#include <iostream>
#include <vector>

using namespace std;

string &complete_name_9_46(string &name, const string &prefix, const string &suffix) {
    name.insert(0, prefix);
    name.insert(name.size(), suffix);

    return name;
}

int main_9_46() {
    string name = "Tom Hardy";
    string prefix = "Mr.";
    string suffix = ".Jr";

    cout << complete_name_9_46(name, prefix, suffix) << endl;


    return 0;
}