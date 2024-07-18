#include <iostream>
using namespace std;

int main ()
{
    int purchaseAmount,totalCost ;
    double discount=0.0;
    cout<<"Enter your purchase amount:\n";
    cin>>purchaseAmount;
    if (purchaseAmount<=50000){
        discount=0.03;
        cout<<"you are eligible for 3% discount\n";
    }
    else if(purchaseAmount>50000&& purchaseAmount<=300000){
        discount =0.10;
        cout<<"you are eligible for 10% discount\n";
    }
    else if (purchaseAmount > 300000 && purchaseAmount <= 900000) {
        discount = 0.18;
       cout<<"You are  eligible for 18% discount\n";
    }
    else if (purchaseAmount>900000){
        discount=0.25;
        cout<<"you are eligible for 25% discount\n";
    }
    else {
        cout<<"invalid\n";
    }
    totalCost=purchaseAmount-(purchaseAmount*discount);
    cout<<"Total cost after discount :"<<totalCost<<endl;
    return 0;

}