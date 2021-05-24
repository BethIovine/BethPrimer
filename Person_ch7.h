
#ifndef BETHPRIMER_PERSON_CH7_H
#define BETHPRIMER_PERSON_CH7_H

#include<string>
#include<iostream>

using namespace std;

class Person_ch7;



class Person_ch7 {
    friend istream &read(istream &is, Person_ch7 &person);
    friend ostream &print(ostream &os, const Person_ch7 &person);
public:
    Person_ch7() = default;

    Person_ch7(const string &n, const string &a) : name(n), address(a) {};

    Person_ch7(const string &n) : name(n) {};

    Person_ch7(istream &is) { read(is, *this); }


    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    string print() const {
        return "name:  " + name + ",address : " + address;
    }

private:
    string name;
    string address;
};



#endif //BETHPRIMER_PERSON_CH7_H
