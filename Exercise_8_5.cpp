#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readFileIntoVector_8_5(const string& fileName,vector<string>& vec){
    ifstream ifs(fileName);
    if(ifs){
        string buf;
        while(ifs>>buf){
            vec.push_back(buf);
        }
    }
}

int main_8_5() {
    vector<string> vec;
    string fileName = "../chapter8/strings.txt";

    readFileIntoVector_8_5(fileName,vec);
    for(string s:vec) cout<<s<<endl;

    return 0;
}