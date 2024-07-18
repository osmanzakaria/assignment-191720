#include <iostream>
using namespace std;

int main()
{
    int time;
    cout<<"Enter time in (seconds)";
    cin>>time;
    int lightstate=time%3;
    switch (lightstate){
        case 0:
        cout<<"red"<<endl;
        break;
        case 1:
        cout<<"yellow"<<endl;
        break;
        case 2:
        cout<<"green"<<endl;
        break;
        default:
        cout<<"inalid time\n";
    }
     

    
    


}