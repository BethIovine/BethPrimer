#include <iostream>
#include <vector>

using namespace std;

string &complete_name_9_45(string &name, const string &prefix, const string &suffix) {
    if (!prefix.empty()) name.insert(name.begin(), prefix.begin(), prefix.end());
    if (!suffix.empty()) name.append(suffix);

    return name;
}

int main_9_45() {
    string name = "Tom Hardy ";
    string prefix = "Mr.";
    string suffix = "Jr.";

    cout << complete_name_9_45(name, prefix, suffix) << endl;


    return 0;
}
