#include <iostream>
#include <string>
using namespace std;

int main() {
    int daysLate;
    string book;

    cout << "Enter the amount of days late: ";
    cin >> daysLate;
    
    // Consume the newline character left in the input buffer
    cin.ignore();


    cout << "Enter the type of book (regular, children, reference): ";
    getline(cin, book);

    if (daysLate >= 10) {
        if (book == "regular") {
            cout << "Your fine is 100 shillings" << endl;
        } else if (book == "children") {
            cout << "Your fine is 50 shillings" << endl;
        } else if (book == "reference") {
            cout << "Your fine is 200 shillings" << endl;
        } else {
            cout << "Invalid book type" << endl;
        }
    } else if (daysLate <= 10) {
        if (book == "regular") {
            cout << "Your fine is 50 shillings" << endl;
        } else if (book == "children") {
            cout << "Your fine is 20 shillings" << endl;
        } else if (book == "reference") {
            cout << "Your fine is 100 shillings" << endl;
        } else {
            cout << "Invalid book type" << endl;
        }
    } else if (daysLate <= 0) {
        cout << "You have no fine" << endl;
    } else {
        cout << "Invalid number of days late" << endl;
    }

    return 0;
}



