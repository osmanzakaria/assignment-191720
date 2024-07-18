#include <iostream>
using namespace std;

int main()
{
    int option;
    cout<<"choose an option\n";
    cout<<"1.calculate the area of circle\n2.calculate the area of rectangle\n3.calculate the area of triangle\n4.quit"<<endl;
    cout<<"please select an option"<<endl;
    cin>>option;

    switch (option){
        case 1:
        cout<<"calculate the area of circle"<<endl;
        break;

        case 2:
        cout<<"calculate area of rectangle"<<endl;
        break;

        case 3:
        cout<<"calculate area of triangle"<<endl;
        break;

        case 4:
        cout<<"quit"<<endl;

    }
    return 0;
}