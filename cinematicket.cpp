#include <iostream>
using namespace std;

int main()
{
    int age;
    string movieType;
    cout << "Enter your age:" << endl;
    cin >> age;
    cout << "Enter the movie type (regular, 3D):" << endl;
    cin >> movieType;

    if(age <= 18) {
        if(movieType == "regular") {
            cout << "Ticket price is ksh 1000" << endl;
        }
        else if (movieType == "3D") {
            cout << "Ticket price is ksh 1500" << endl;
        }
        else {
            cout << "Invalid movie type" << endl;
        }
    }
    else if (age > 18) {
        if(movieType == "regular") {
            cout << "Ticket price is ksh 2000" << endl;
        }
        else if (movieType == "3D") {
            cout << "Ticket price is ksh 2500" << endl;
        }
        else {
            cout << "Invalid movie type" << endl;
        }
    }

    return 0;
}
