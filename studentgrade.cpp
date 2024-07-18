#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;
    string fullName,course;
    cout<<"Enter your full student name\n";
    getline (cin,fullName);
    cout<<"Enter your course\n";
    cin>>course;
    cout<<"Enter your score\n";
    cin>>score;
    if (score>70) {
        cout<<" grade=A\n";
    }
    else if(score==60-69){
        cout<<" grade=B\n";
    }
    else if(score==50-59){
        cout<<" grade=C\n";
    }
    else if  (score==40-49){
        cout<<"grade=D\n";
    }
    else if (score<40){
        cout<<"grade=F\n";
    }
    else {
        cout<<"grade=invalid score\n";
    }
    return 0;
}