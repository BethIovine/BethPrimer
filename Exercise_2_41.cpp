#include <iostream>
#include <string>

using namespace std;


struct Sales_data_ch7 {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main_2_41() {
    Sales_data_ch7 book;
    double price;

    cout << "Please enter book number and units_sold number and price:" << endl;
    cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
    cout << book.bookNo << "  " << book.units_sold << "  " << book.revenue << endl;

    return 0;
}