#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<string> studentStack;

  int numberOfStudents;
  cout << "Enter the number of students: ";
  cin >> numberOfStudents;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for (int i = 0; i < numberOfStudents; i++) {
    string studentName;
    cout << "Enter an student's name: ";
    getline(cin, studentName);
    studentStack.push(studentName);
  }

  while(!studentStack.empty()) {
    cout << studentStack.top() << endl;
    studentStack.pop();
  }

  return 0;
}