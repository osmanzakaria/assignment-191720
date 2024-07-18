#include <iostream>
using namespace std;

int main()
{
    int age,customerDuration;
    double bankBalance;
    string crbStatus;
    cout<<"Enter your age:\n";
    cin>>age;
    cout<<"Enter your bank balance:\n";
    cin>>bankBalance;
    cout<<"enter your crb status (good/bad): \n";
    cin>>crbStatus;
    cout<<"Enter amount of month you have been a customer: \n";
    cin>>customerDuration;
    //checking coditions
    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerDuration > 6 ){
        cout<<"you are qualified for a loan\n";
    }
    else{
        cout<<"you are not qualified for a loan\n";
    }



    return 0;



}