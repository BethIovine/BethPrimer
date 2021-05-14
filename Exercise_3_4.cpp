#include <iostream>
#include <string>

using namespace std;

int main_3_4() {
    cout<<"Please enter two strings:"<<endl;
    string str1,str2;

    getline(cin,str1);
    getline(cin,str2);

    cout<<"string1 is :"<<str1<<endl;
    cout<<"string2 is :"<<str2<<endl;
    if(str1 > str2) cout<<"string1 is larger than string2"<<endl;
    else if(str1 == str2) cout<<"string1 is equal than string2"<<endl;
    else cout<<"string2 is larger than string1"<<endl;

    if(str1.length() == str2.length()) cout<<"string1's length equal to string2"<<endl;
    else if(str1.length() > str2.length()) cout<<"string1 is longer than string2"<<endl;
    else cout<<"string1 is shorter than string2"<<endl;

    return 0;
}