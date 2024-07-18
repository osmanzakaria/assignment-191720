#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int score;
  char grade;

  cout << "Enter your student name: ";
  getline(cin, name);
  cout << "Enter the student score: ";
  cin >> score;

  switch (score / 10) {
    case 10: // In case the score is 100
    case 9:
    case 8:
    case 7:
      grade = 'A';
      break;
    case 6:
      grade = 'B';
      break;
    case 5:
      grade = 'C';
      break;
    default:
      grade = 'F';
  }

  cout << "Student Name: " << name << endl;
  cout << "Grade: " << grade << endl;

  return 0;
}
