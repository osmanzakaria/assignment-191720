#include <iostream>
#include <string>
using namespace std;

int main() {
    int age, customer_duration;
    string crb_status ;
    double bank_balance;

    // Capture customer details
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bank_balance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crb_status;
    cout << "Enter the number of months you have been a customer: ";
    cin >> customer_duration;

    // Check conditions
    if (age > 22 && bank_balance > 50000 && crb_status == "good" && customer_duration > 6) {
        cout << "You are qualified for the loan." << endl;
    } else {
        cout << "You are not qualified for the loan." << endl;
    }

    return 0;
}
