#include <iostream>
#include <string>
using namespace std;

int main()
{
    int password,limit=500000,funds,amountToTransact;
    string userAccount;
    cout<<"Enter ypur user account account :\n";
    getline (cin,userAccount);
    cout<<"Enter your password:\n";
    cin>>password;
    cout<<"welcome back"<<endl;
    cout<<"Enter the amount of funds in your account:\n";
    cin>>funds;
    cout<<"Enter amont to transact:\n";
    cin>>amountToTransact;
    
    if (amountToTransact>funds){
        cout<<"insufficient funds in your account!\n";
    } 
    else if (amountToTransact<=funds && amountToTransact<=limit){
        cout<<"withdrawal is underway\n";
    }
    else if(amountToTransact>limit){
        cout<<"You have exceeded the  daily limit.\n";
    }
    else if (amountToTransact<=limit){
        cout<<"You are qualified for transaction.\n";
    }
    else {
        cout<<"Invalid transaction!\n";
    }
    return 0;
}