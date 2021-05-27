#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readFileIntoVector_8_4(const string& fileName,vector<string>& vec){
    ifstream ifs(fileName);
    if(ifs){
        string buf;
        while(getline(ifs,buf)){
            vec.push_back(buf);
        }
    }
}

int main_8_4() {
    vector<string> vec;
    string fileName = "../chapter8/strings.txt";

    readFileIntoVector_8_4(fileName,vec);
    for(string s:vec) cout<<s<<endl;

    return 0;
}