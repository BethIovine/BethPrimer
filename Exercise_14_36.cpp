#include <iostream>
#include <vector>

using namespace std;

class GetInput_14_36 {
public:
    GetInput_14_36(istream &i = cin) : is(i) {}

    string operator()() const {
        string str;
        getline(is, str);
        return is ? str : string();
    }

private:
    istream &is;
};

int main_14_36() {
    GetInput_14_36 getInput;
    vector<string> v;

    for (string temp; !(temp = getInput()).empty();) v.push_back(temp);
    for (auto &s:v) cout << s << endl;

    return 0;
}