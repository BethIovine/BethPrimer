#include <iostream>

using namespace std;

class GetInput_14_35 {
public:
    GetInput_14_35(istream &i = cin) : is(i) {}

    string operator()() const {
        string str;
        getline(is, str);
        return is ? str : string();
    }

private:
    istream &is;
};

int main_14_35() {
    GetInput_14_35 getInput;
    cout << getInput() << endl;

    return 0;
}