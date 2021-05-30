#include <iostream>
#include <vector>

using namespace std;

void replace_9_44(string &s, const string &oldVal, const string &newVal) {
    for(size_t index = 0;index <=(s.size()-oldVal.size());){
        if(oldVal == s.substr(index,oldVal.size())){
            s.replace(index,oldVal.size(),newVal);
            index += newVal.size();
        }else{
            ++index;
        }
    }
}

int main_9_44() {
    string s{"To drive straight thru is a foolish, tho courageous act."};

    replace_9_44(s, "tho", "though");
    replace_9_44(s, "thru", "through");
    cout << s << endl;

    return 0;
}